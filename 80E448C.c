int __fastcall task_battle_intro_80BC47C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int *v3; // r0@4
  signed __int16 v4; // r1@4
  int *v5; // r1@7
  int v6; // r0@7
  int *v7; // r1@10
  int *v8; // r2@11
  __int16 *v9; // r2@14
  __int16 v10; // r0@15
  int *v11; // r1@21
  signed int v12; // r3@23
  int *v13; // r1@27
  int v14; // r2@27
  int v16; // [sp+0h] [bp-20h]@28
  int v17; // [sp+1Ch] [bp-4h]@30

  v1 = a1;
  word_30042C0 += 6;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        if ( v20239F8 & 2 )
        {
          v3 = &dword_3004B20[10 * v1];
          v4 = 16;
        }
        else
        {
          v3 = &dword_3004B20[10 * v1];
          v4 = 1;
        }
        *((_WORD *)v3 + 6) = v4;
        ++*((_WORD *)v3 + 4);
        return v17;
      case 1u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 6) - 1;
        *((_WORD *)v5 + 6) = v6;
        if ( !(v6 << 16) )
        {
          ++*((_WORD *)v5 + 4);
          v4000048 = 63;
        }
        return v17;
      case 2u:
        word_3004240 -= 255;
        if ( (word_3004240 & 0xFF00) == 12288 )
        {
          v7 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v7 + 4);
          *((_WORD *)v7 + 6) = 240;
          *((_WORD *)v7 + 7) = 32;
          v2024DE8 &= 0xFFFEu;
        }
        return v17;
      case 3u:
        v8 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v8 + 7) )
        {
          --*((_WORD *)v8 + 7);
          goto _080E45D2;
        }
        if ( *((_WORD *)v8 + 5) == 1 )
        {
          v9 = &word_30041B4;
          if ( (unsigned __int16)word_30041B4 == 65456 )
            goto _080E45D2;
          v10 = word_30041B4 - 2;
        }
        else
        {
          v9 = &word_30041B4;
          if ( (unsigned __int16)word_30041B4 == 65480 )
            goto _080E45D2;
          v10 = word_30041B4 - 1;
        }
        *v9 = v10;
_080E45D2:
        if ( word_3004240 & 0xFF00 )
          word_3004240 -= 1020;
        v11 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v11 + 6) )
          *((_WORD *)v11 + 6) -= 2;
        v12 = 0;
        do
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v12++) = *((_WORD *)v11 + 6);
        while ( v12 <= 79 );
        for ( ; v12 <= 159; ++v12 )
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v12) = -LOWORD(dword_3004B20[10 * v1 + 3]);
        v13 = &dword_3004B20[10 * v1];
        v14 = *((_WORD *)v13 + 6);
        if ( !*((_WORD *)v13 + 6) )
        {
          byte_3004DD5 = 3;
          ++*((_WORD *)v13 + 4);
          v16 = v14;
          CpuSet(&v16, 100720640, 83886592);
          v400000A = -25600;
          v400000C = 24064;
        }
        break;
      case 4u:
        sub_80E443C(v1);
        return v17;
      default:
        return v17;
    }
  }
  return v17;
}
