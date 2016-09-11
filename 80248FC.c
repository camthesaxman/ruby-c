int sub_80248FC()
{
  int v0; // r7@1
  _BYTE *v1; // r5@9
  signed int v2; // r8@9
  signed int v3; // r9@10
  _BYTE *v4; // r5@10
  __int16 v5; // r0@10
  _BYTE *v6; // r5@14
  _BYTE *v7; // r1@15
  _BYTE *v8; // r0@17
  char *v9; // r0@17
  _BYTE *v10; // r5@17
  _BYTE *v11; // r5@23
  signed int v12; // r8@23
  _BYTE *v13; // r5@24
  __int16 v14; // r0@24
  char *v15; // r0@24
  _BYTE *v16; // r5@24
  int v18; // [sp+20h] [bp-4h]@0

  LOWORD(v0) = 0;
  if ( v201609C == 1 )
  {
    if ( word_300179E )
    {
      audio_play(5);
      v11 = StringCopy(&gStringVar4, &gUnknown_08400D9F);
      v12 = 0;
      do
      {
        v13 = StringAppend(v11, (_BYTE *)gUnknown_0840165C[v12]);
        v14 = GetMonData((char *)&unk_3004360 + 100 * v2016018, (unsigned __int8)gLevelUpStatBoxStats[v12]);
        *v13 = -4;
        v13[1] = 19;
        v13[2] = 8 * (9 * (v12 & 1) + 5) + 6;
        v13 += 3;
        *v13 = -4;
        v13[1] = 20;
        v13[2] = 6;
        v15 = ConvertIntToDecimalStringN(v13 + 3, v14, 1, 3);
        *v15 = -4;
        v15[1] = 20;
        v15[2] = 0;
        v16 = v15 + 3;
        if ( v12 & 1 )
        {
          *v16 = -2;
          v15[4] = -1;
          v11 = v15 + 4;
        }
        else
        {
          *v16 = -4;
          v15[4] = 17;
          v15[5] = 8;
          v11 = v15 + 6;
          v15[6] = -1;
        }
        ++v12;
      }
      while ( v12 <= 5 );
      InitWindow((int)&unk_3004210, (int)&gStringVar4, 256, 12, 1);
      sub_8002F44((int)&unk_3004210);
_08024BEA:
      ++v201609C;
      return v18;
    }
  }
  else
  {
    if ( (signed int)v201609C <= 1 )
    {
      if ( v201609C )
        return v18;
      sub_802BBD4(11, 0, 29, 7);
      v1 = StringCopy(&gStringVar4, &gUnknown_08400D9F);
      v2 = 0;
      do
      {
        v3 = 0;
        v4 = StringAppend(v1, (_BYTE *)gUnknown_0840165C[v2]);
        v5 = GetMonData((char *)&unk_3004360 + 100 * v2016018, (unsigned __int8)gLevelUpStatBoxStats[v2]);
        if ( (unsigned int)v2 <= 5 )
          JUMPOUT(__CS__, *(&080249BC + v2));
        if ( (signed __int16)v0 < 0 )
        {
          v0 = 0xFFFF * (signed __int16)v0 & 0xFFFF;
          v3 = 1;
        }
        *v4 = -4;
        v4[1] = 19;
        v4[2] = 8 * (9 * (v2 & 1) + 5) + 6;
        v6 = v4 + 3;
        if ( v3 )
          v7 = &gUnknown_08400DAC;
        else
          v7 = &gUnknown_08400DAA;
        v8 = StringCopy(v6, v7);
        *v8 = -4;
        v8[1] = 20;
        v8[2] = 6;
        v9 = ConvertIntToDecimalStringN(v8 + 3, (signed __int16)v0, 1, 2);
        *v9 = -4;
        v9[1] = 20;
        v9[2] = 0;
        v10 = v9 + 3;
        if ( v2 & 1 )
        {
          *v10 = -2;
          v9[4] = -1;
          v1 = v9 + 4;
        }
        else
        {
          *v10 = -4;
          v9[4] = 17;
          v9[5] = 8;
          v1 = v9 + 6;
          v9[6] = -1;
        }
        ++v2;
      }
      while ( v2 <= 5 );
      InitWindow((int)&unk_3004210, (int)&gStringVar4, 256, 12, 1);
      sub_8002F44((int)&unk_3004210);
      goto _08024BEA;
    }
    if ( v201609C == 2 )
    {
      if ( word_300179E )
      {
        audio_play(5);
        sub_802BBD4(11, 0, 29, 7);
        ++v201609C;
      }
    }
    else if ( v201609C == 3 )
    {
      ++v2024C10;
    }
  }
  return v18;
}
