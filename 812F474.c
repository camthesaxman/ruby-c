int __fastcall sub_812F474(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r6@1
  __int16 *v3; // r0@2
  signed int v4; // r0@4
  int v5; // r5@12
  int v6; // r9@12
  int v7; // r4@12
  int v8; // r8@12
  int v9; // r0@12
  int v10; // r7@12
  unsigned int v11; // r2@12
  unsigned int i; // r12@12
  int v13; // r0@13
  signed int v14; // r0@13
  signed int v15; // r1@14
  __int16 v16; // r3@15
  signed int v17; // r2@16
  signed int v18; // r1@16
  __int16 v19; // r0@17
  __int16 v20; // r0@18
  __int16 v21; // r1@21
  __int16 v22; // r0@25
  __int16 v23; // r0@27
  int v25; // [sp+0h] [bp-34h]@12
  __int16 v26; // [sp+4h] [bp-30h]@2
  __int16 v27; // [sp+8h] [bp-2Ch]@4
  int v28; // [sp+30h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (unsigned __int8)battle_get_per_side_status_permutated(*((_BYTE *)v2 + 18)) == 1 )
  {
    v26 = word_30042C0;
    v3 = &word_30041B4;
  }
  else
  {
    v26 = word_3004288;
    v3 = &word_3004280;
  }
  v27 = *v3;
  v4 = *((_WORD *)v2 + 4);
  if ( v4 == 1 )
  {
    v22 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v22;
    if ( v22 > 12 )
    {
      byte_3004DD5 = 3;
      *((_WORD *)v2 + 6) = 0;
      goto _0812F700;
    }
  }
  else if ( v4 > 1 )
  {
    if ( v4 == 2 )
    {
      v23 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v23;
      if ( v23 & 1 )
        ++*((_WORD *)v2 + 7);
      else
        --*((_WORD *)v2 + 8);
      v4000052 = (*((_WORD *)v2 + 8) << 8) | *((_WORD *)v2 + 7);
      if ( *((_WORD *)v2 + 7) == 16 && !*((_WORD *)v2 + 8) )
      {
        *((_WORD *)v2 + 6) = 0;
        *((_WORD *)v2 + 7) = 0;
        goto _0812F700;
      }
    }
    else if ( v4 == 3 )
    {
      move_anim_task_del(v1);
    }
  }
  else
  {
    if ( *((_WORD *)v2 + 4) )
      return v28;
    v5 = 2 * *((_WORD *)v2 + 18) & 0xFFFF;
    LOWORD(v25) = 0;
    LOWORD(v6) = 0;
    LOWORD(v7) = 0;
    *((_WORD *)v2 + 5) = (*((_WORD *)v2 + 5) + 2) & 0xFF;
    LOWORD(v8) = *((_WORD *)v2 + 5);
    *((_WORD *)v2 + 13) = 2016 / *((_WORD *)v2 + 10);
    *((_WORD *)v2 + 14) = -(signed __int16)(2 * *((_WORD *)v2 + 11) / *((_WORD *)v2 + 13));
    v9 = *((_WORD *)v2 + 11);
    *((_WORD *)v2 + 15) = v9;
    v10 = (v9 << 16 >> 21) & 0xFFFF;
    *((_WORD *)v2 + 16) = v9 << 16 >> 21;
    v11 = *((_WORD *)v2 + 18);
    for ( i = v11 << 16; (signed __int16)v11 > (signed int)*((_WORD *)v2 + 17); i = v11 << 16 )
    {
      *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (signed __int16)v5 + 1) = v27 + v7 - v6;
      *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (signed __int16)v5) = v26
                                                                                 + v10
                                                                                 + (gSineTable[(signed __int16)v8] << 16 >> 21);
      v8 = ((signed __int16)v8 + 10) & 0xFF;
      v13 = *((_WORD *)v2 + 14) + *((_WORD *)v2 + 15);
      *((_WORD *)v2 + 15) = v13;
      v10 = (v13 << 16 >> 21) & 0xFFFF;
      *((_WORD *)v2 + 16) = v13 << 16 >> 21;
      v7 = ((signed __int16)v7 + 1) & 0xFFFF;
      v5 = ((signed __int16)v5 - 2) & 0xFFFF;
      v14 = ((signed __int16)v25 + *((_WORD *)v2 + 10)) << 16;
      v25 = ((signed __int16)v25 + *((_WORD *)v2 + 10)) & 0xFFFF;
      v6 = (v14 >> 21) & 0xFFFF;
      v11 = (i - 0x10000) >> 16;
    }
    v15 = v11 << 17;
    if ( !(v11 & 0x4000) )
    {
      v16 = v26 + 240;
      do
      {
        v17 = v15 >> 16;
        v18 = v15 >> 16;
        word_3004DE0[v18] = v16;
        word_3005560[v18] = v16;
        v17 -= 2;
        v15 = v17 << 16;
      }
      while ( !(v17 & 0x8000) );
    }
    v19 = *((_WORD *)v2 + 10) + 1;
    *((_WORD *)v2 + 10) = v19;
    if ( v19 <= 63 )
    {
      *((_WORD *)v2 + 11) += *((_WORD *)v2 + 12);
    }
    else
    {
      *((_WORD *)v2 + 10) = 64;
      v20 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v20;
      if ( v20 & 1 )
        --*((_WORD *)v2 + 7);
      else
        ++*((_WORD *)v2 + 8);
      v4000052 = (*((_WORD *)v2 + 8) << 8) | *((_WORD *)v2 + 7);
      v21 = *((_WORD *)v2 + 7);
      if ( !*((_WORD *)v2 + 7) && *((_WORD *)v2 + 8) == 16 )
      {
        *((_WORD *)v2 + 6) = v21;
        *((_WORD *)v2 + 7) = v21;
_0812F700:
        ++*((_WORD *)v2 + 4);
        return v28;
      }
    }
  }
  return v28;
}
