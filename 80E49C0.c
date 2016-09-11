int __fastcall task_battle_intro_anim(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int *v3; // r3@3
  signed __int16 v4; // r0@4
  int *v5; // r1@7
  int v6; // r0@7
  int *v7; // r1@10
  int *v8; // r2@11
  __int16 v9; // r1@13
  int v10; // r0@14
  int *v11; // r1@18
  signed int v12; // r3@20
  int *v13; // r1@24
  int v14; // r2@24
  int *v15; // r2@27
  int v17; // [sp+0h] [bp-1Ch]@25
  int v18; // [sp+18h] [bp-4h]@29

  v1 = a1;
  word_30042C0 += 8;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v4000050 = 6210;
        v4000052 = 2056;
        v4000054 = 0;
        v3 = &dword_3004B20[10 * v1];
        *((_WORD *)v3 + 8) = 2056;
        if ( v20239F8 & 2 )
          v4 = 16;
        else
          v4 = 1;
        *((_WORD *)v3 + 6) = v4;
        ++*((_WORD *)v3 + 4);
        break;
      case 1u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 6) - 1;
        *((_WORD *)v5 + 6) = v6;
        if ( !(v6 << 16) )
        {
          ++*((_WORD *)v5 + 4);
          v4000048 = 63;
        }
        break;
      case 2u:
        word_3004240 -= 255;
        if ( (word_3004240 & 0xFF00) == 12288 )
        {
          v7 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v7 + 4);
          *((_WORD *)v7 + 6) = 240;
          *((_WORD *)v7 + 7) = 32;
          *((_WORD *)v7 + 9) = 1;
          v2024DE8 &= 0xFFFEu;
        }
        break;
      case 3u:
        v8 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v8 + 7) )
        {
          --*((_WORD *)v8 + 7);
        }
        else
        {
          v9 = *((_WORD *)v8 + 8);
          if ( v9 & 0xF )
          {
            v10 = *((_WORD *)v8 + 9) - 1;
            *((_WORD *)v8 + 9) = v10;
            if ( !(v10 << 16) )
            {
              *((_WORD *)v8 + 8) = v9 + 255;
              *((_WORD *)v8 + 9) = 6;
            }
          }
        }
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
          v17 = v14;
          CpuSet(&v17, 100720640, 83886592);
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
  v15 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v15 + 4) != 4 )
    v4000052 = *((_WORD *)v15 + 8);
  return v18;
}
