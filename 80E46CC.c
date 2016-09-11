int __fastcall task00_battle_intro_80BC6C8(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  int *v3; // r2@1
  __int16 *v4; // r1@6
  __int16 v5; // r0@6
  int *v6; // r4@9
  signed int v7; // r0@10
  __int16 v8; // r1@12
  __int16 v9; // r0@13
  int *v10; // r3@15
  unsigned int v11; // r0@17
  int *v12; // r2@19
  int *v13; // r1@23
  int v14; // r0@23
  int *v15; // r1@26
  int v16; // r1@27
  __int16 v17; // r3@27
  __int16 v18; // r3@30
  int v19; // r0@31
  int v20; // r1@35
  signed int v21; // r3@37
  int *v22; // r1@41
  int v23; // r2@41
  int v25; // [sp+0h] [bp-1Ch]@42
  int v26; // [sp+18h] [bp-4h]@46

  v1 = a1;
  v2 = HIWORD(dword_3004B20[10 * a1 + 2]);
  v3 = dword_3004B20;
  if ( v2 == 3 )
  {
    v4 = &word_30042C0;
    v5 = word_30042C0 + 6;
    goto _080E4712;
  }
  if ( v2 > 3 )
  {
    if ( v2 != 4 )
      goto _080E4714;
    goto _080E4700;
  }
  if ( v2 == 2 )
  {
_080E4700:
    v4 = &word_30042C0;
    v5 = word_30042C0 + 8;
_080E4712:
    *v4 = v5;
  }
_080E4714:
  v6 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v6 + 5) == 4 )
  {
    v7 = (signed __int16)cosine2(*((_WORD *)v6 + 10));
    if ( (signed __int16)v7 < 0 )
      v7 += 511;
    word_30041B4 = (v7 >> 9) - 8;
    v8 = *((_WORD *)v6 + 10);
    if ( (signed int)*((_WORD *)v6 + 10) > 179 )
      v9 = v8 + 6;
    else
      v9 = v8 + 4;
    *((_WORD *)v6 + 10) = v9;
    v3 = dword_3004B20;
    v10 = &dword_3004B20[10 * v1];
    if ( *((_WORD *)v10 + 10) == 360 )
      *((_WORD *)v10 + 10) = 0;
  }
  v11 = LOWORD(v3[10 * v1 + 2]);
  if ( v11 <= 4 )
  {
    switch ( v11 )
    {
      case 0u:
        v12 = &dword_3004B20[10 * v1];
        *((_WORD *)v12 + 8) = 16;
        if ( v20239F8 & 2 )
          *((_WORD *)v12 + 6) = 16;
        else
          *((_WORD *)v12 + 6) = 1;
        ++*((_WORD *)v12 + 4);
        break;
      case 1u:
        v13 = &dword_3004B20[10 * v1];
        v14 = *((_WORD *)v13 + 6) - 1;
        *((_WORD *)v13 + 6) = v14;
        if ( !(v14 << 16) )
        {
          ++*((_WORD *)v13 + 4);
          v4000048 = 63;
        }
        break;
      case 2u:
        word_3004240 -= 255;
        if ( (word_3004240 & 0xFF00) == 12288 )
        {
          v15 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v15 + 4);
          *((_WORD *)v15 + 6) = 240;
          *((_WORD *)v15 + 7) = 32;
          *((_WORD *)v15 + 9) = 1;
          v2024DE8 &= 0xFFFEu;
        }
        break;
      case 3u:
        v16 = (int)&v3[10 * v1];
        v17 = *(_WORD *)(v16 + 14);
        if ( *(_WORD *)(v16 + 14) )
        {
          *(_WORD *)(v16 + 14) = v17 - 1;
          if ( v17 == 1 )
          {
            v4000050 = 6210;
            v4000052 = 15;
            v4000054 = 0;
          }
        }
        else
        {
          v18 = *(_WORD *)(v16 + 16);
          if ( v18 & 0x1F )
          {
            v19 = *(_WORD *)(v16 + 18) - 1;
            *(_WORD *)(v16 + 18) = v19;
            if ( !(v19 << 16) )
            {
              *(_WORD *)(v16 + 16) = v18 + 255;
              *(_WORD *)(v16 + 18) = 4;
            }
          }
        }
        if ( word_3004240 & 0xFF00 )
          word_3004240 -= 1020;
        v20 = (int)&v3[10 * v1];
        if ( *(_WORD *)(v20 + 12) )
          *(_WORD *)(v20 + 12) -= 2;
        v21 = 0;
        do
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v21++) = *(_WORD *)(v20 + 12);
        while ( v21 <= 79 );
        for ( ; v21 <= 159; ++v21 )
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v21) = -LOWORD(dword_3004B20[10 * v1 + 3]);
        v22 = &dword_3004B20[10 * v1];
        v23 = *((_WORD *)v22 + 6);
        if ( !*((_WORD *)v22 + 6) )
        {
          byte_3004DD5 = 3;
          ++*((_WORD *)v22 + 4);
          v25 = v23;
          CpuSet(&v25, 100720640, 83886592);
          v400000A = -25600;
          v400000C = 24064;
        }
        break;
      case 4u:
        sub_80E443C(v1);
        break;
      default:
        break;
    }
  }
  if ( LOWORD(dword_3004B20[10 * v1 + 2]) != 4 )
    v4000052 = dword_3004B20[10 * v1 + 4];
  return v26;
}
