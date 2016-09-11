int __fastcall sub_80E4C34(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r7@1
  unsigned int v3; // r1@7
  int *v4; // r0@9
  int *v5; // r1@10
  int v6; // r0@10
  signed __int16 *v7; // r1@11
  signed __int16 v8; // r2@11
  int *v9; // r1@13
  int *v10; // r1@16
  signed int v11; // r3@18
  int *v12; // r1@22
  int v14; // [sp+0h] [bp-24h]@6
  int v15; // [sp+4h] [bp-20h]@6
  int v16; // [sp+20h] [bp-4h]@26

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 4) > 1 && !*((_WORD *)v2 + 8) )
  {
    if ( word_30042C0 & 0x8000 || (unsigned __int16)word_30042C0 <= 0x4Fu )
    {
      word_30042C0 += 3;
      word_3004288 -= 3;
    }
    else
    {
      v14 = word_30042C0 & 0x8000;
      CpuSet(&v14, 100720640, 83886592);
      v15 = 0;
      CpuSet(&v15, 100724736, 83886592);
      *((_WORD *)v2 + 8) = 1;
    }
  }
  v3 = LOWORD(dword_3004B20[10 * v1 + 2]);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 6) = 16;
        ++*((_WORD *)v4 + 4);
        break;
      case 1u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 6) - 1;
        *((_WORD *)v5 + 6) = v6;
        if ( !(v6 << 16) )
        {
          ++*((_WORD *)v5 + 4);
          gSprites[68 * v201608A + 1] = gSprites[68 * v201608A + 1] & 0xF3 | 8;
          dword_2020020[17 * v201608A] = (int)sub_800FE20;
          gSprites[68 * v201608B + 1] = gSprites[68 * v201608B + 1] & 0xF3 | 8;
          dword_2020020[17 * v201608B] = (int)sub_800FE20;
          v4000048 = 63;
          v7 = (signed __int16 *)67108938;
          v8 = 16134;
          goto _080E4E94;
        }
        break;
      case 2u:
        word_3004240 -= 255;
        if ( (word_3004240 & 0xFF00) == 12288 )
        {
          v9 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v9 + 4);
          *((_WORD *)v9 + 6) = 240;
          *((_WORD *)v9 + 7) = 32;
          v2024DE8 &= 0xFFFEu;
        }
        break;
      case 3u:
        if ( word_3004240 & 0xFF00 )
          word_3004240 -= 1020;
        v10 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v10 + 6) )
          *((_WORD *)v10 + 6) -= 2;
        v11 = 0;
        do
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v11++) = *((_WORD *)v10 + 6);
        while ( v11 <= 79 );
        for ( ; v11 <= 159; ++v11 )
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v11) = -LOWORD(dword_3004B20[10 * v1 + 3]);
        v12 = &dword_3004B20[10 * v1];
        if ( !*((_WORD *)v12 + 6) )
        {
          byte_3004DD5 = 3;
          ++*((_WORD *)v12 + 4);
          v400000A = -25600;
          v7 = (signed __int16 *)67108876;
          v8 = 24064;
_080E4E94:
          *v7 = v8;
        }
        break;
      case 4u:
        sub_80E443C(v1);
        break;
      default:
        return v16;
    }
  }
  return v16;
}
