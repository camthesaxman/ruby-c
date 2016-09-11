int __fastcall sub_810A178(unsigned __int8 a1)
{
  int *v1; // r6@1
  int v2; // r7@1
  unsigned int v3; // r4@1
  int v4; // r4@2
  int v5; // r5@2
  int v6; // r4@2
  unsigned __int16 v7; // r0@2
  int v8; // r0@2
  int *v9; // r0@8
  __int16 v10; // r1@8
  int v12; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  v3 = *((_BYTE *)v1 + 8);
  if ( word_300179E & 1 )
  {
    v4 = 2 * v3;
    MenuZeroFillWindowRect(
      gUnknown_083F76BE[v4],
      gUnknown_083F76BE[v4 + 1],
      gUnknown_083F76BE[v4] + 13,
      gUnknown_083F76BE[v4 + 1] + 3);
    v4000040 = 0;
    v4000044 = 0;
    v5 = (unsigned __int8)gUnknown_083F76B8[v4];
    v6 = (unsigned __int8)byte_83F76B9[v4];
    *((_WORD *)v1 + 6) = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F77FC, v5, v6);
    v7 = sub_8109E50(*((_WORD *)v1 + 4));
    v8 = (unsigned __int8)sub_810A580(v7, v5, v6);
    *((_DWORD *)&unk_2020014 + 17 * v8) = &gUnknown_083F778C;
    dword_2020020[17 * v8] = (int)sub_810A6C4;
    *((_WORD *)v1 + 5) = v8;
    *v1 = (int)sub_810A288;
  }
  else if ( word_300179E & 0x20 && *((_BYTE *)v1 + 8) )
  {
    *((_WORD *)v1 + 4) = v2 - 1;
    sub_810A42C(v3, (v2 - 1) & 0xFF);
  }
  else if ( word_300179E & 0x10 && v3 <= 1 )
  {
    v9 = &dword_3004B20[10 * a1];
    v10 = *((_WORD *)v9 + 4) + 1;
    *((_WORD *)v9 + 4) = v10;
    sub_810A42C(v3, (unsigned __int8)v10);
  }
  return v12;
}
