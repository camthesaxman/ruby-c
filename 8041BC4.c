int __fastcall daycare_build_child_moveset(int a1, unsigned int *a2, unsigned int *a3)
{
  int v3; // r7@1
  unsigned int *v4; // r10@1
  unsigned int *v5; // r9@1
  unsigned int v6; // r6@1
  unsigned int v7; // r6@3
  unsigned int v8; // r6@5
  unsigned __int16 v9; // r0@7
  _BYTE *v10; // r2@7
  unsigned int v11; // r6@7
  unsigned int v12; // r8@9
  unsigned int v13; // r6@9
  __int16 *v14; // r9@10
  unsigned int v15; // r5@11
  unsigned __int16 *v16; // r4@12
  int v17; // r6@18
  unsigned __int16 v18; // r8@19
  unsigned int v19; // r5@20
  unsigned __int16 *v20; // r4@20
  int v21; // r1@23
  int v22; // r6@27
  __int16 *v23; // r10@27
  unsigned int v24; // r5@28
  int v25; // r2@28
  __int16 *v26; // r3@28
  int v27; // r1@31
  int v28; // r6@35
  unsigned int v29; // r5@36
  unsigned __int16 v30; // r8@36
  __int16 *v31; // r0@37
  unsigned __int16 *v32; // r4@38
  int v34; // [sp+0h] [bp-2Ch]@1
  unsigned int v35; // [sp+4h] [bp-28h]@7
  int v36; // [sp+28h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v34 = 0;
  v6 = 0;
  do
  {
    word_3000500[v6] = 0;
    word_30004D8[v6] = 0;
    word_30004E0[v6] = 0;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 3 );
  v7 = 0;
  do
  {
    word_30004E8[v7] = 0;
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 <= 9 );
  v8 = 0;
  do
  {
    word_3000470[v8] = 0;
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 0x31 );
  v9 = GetMonData(a1, 11, (int)word_3000470);
  v35 = sub_804051C(v9, (int)word_3000470) & 0xFF;
  v11 = 0;
  do
  {
    word_30004D8[v11] = GetBoxMonData(v4, v11 + 13, v10);
    word_3000500[v11] = GetBoxMonData(v5, v11 + 13, (_BYTE *)word_30004D8);
    v11 = (v11 + 1) & 0xFFFF;
  }
  while ( v11 <= 3 );
  v12 = pokemon_get_eggmoves(v3, (int)word_30004E8, (int)v10) & 0xFF;
  v13 = 0;
  do
  {
    v14 = word_30004D8;
    if ( !word_30004D8[v13] )
      break;
    v15 = 0;
    if ( v12 > 0 )
    {
      v16 = (unsigned __int16 *)&word_30004D8[v13];
      while ( *v16 != (unsigned __int16)word_30004E8[v15] )
      {
        v15 = (v15 + 1) & 0xFFFF;
        if ( v15 >= v12 )
          goto _08041CEA;
      }
      if ( (unsigned __int16)GiveMoveToMon() == 0xFFFF )
        DeleteFirstMoveAndGiveMoveToMon(v3, *v16);
    }
_08041CEA:
    v13 = (v13 + 1) & 0xFFFF;
    v14 = word_30004D8;
  }
  while ( v13 <= 3 );
  v17 = 0;
  do
  {
    v18 = v17 + 1;
    if ( v14[v17] )
    {
      v19 = 0;
      v20 = (unsigned __int16 *)&word_30004D8[v17];
      v14 = word_30004D8;
      do
      {
        if ( *v20 == (ItemIdToBattleMoveId((v19 + 289) & 0xFFFF) & 0xFFFF) )
        {
          if ( sub_8040374(v3, (unsigned __int8)v19) )
          {
            v21 = *v20;
            if ( (unsigned __int16)GiveMoveToMon() == 0xFFFF )
              DeleteFirstMoveAndGiveMoveToMon(v3, *v20);
          }
        }
        v19 = (v19 + 1) & 0xFFFF;
      }
      while ( v19 <= 0x39 );
    }
    v17 = (unsigned __int16)(v17 + 1);
  }
  while ( v18 <= 3u );
  v22 = 0;
  v23 = word_30004E0;
  if ( *v14 )
  {
    do
    {
      v24 = 0;
      v25 = v22;
      LOWORD(v22) = v22 + 1;
      v26 = &v14[v25];
      do
      {
        if ( (unsigned __int16)*v26 == (unsigned __int16)word_3000500[v24] && *v26 )
        {
          v27 = v34;
          v34 = (v34 + 1) & 0xFFFF;
          word_30004E0[v27] = *v26;
        }
        v24 = (v24 + 1) & 0xFFFF;
      }
      while ( v24 <= 3 );
      v22 = (unsigned __int16)v22;
    }
    while ( (unsigned __int16)v22 <= 3u && v14[v22] );
  }
  v28 = 0;
  if ( word_30004E0[0] )
  {
    do
    {
      v29 = 0;
      v30 = v28 + 1;
      if ( v35 > 0 )
      {
        while ( 1 )
        {
          v31 = &word_3000470[v29];
          if ( *v31 )
          {
            v32 = (unsigned __int16 *)&v23[v28];
            if ( *v32 == (unsigned __int16)*v31 )
              break;
          }
          v29 = (v29 + 1) & 0xFFFF;
          if ( v29 >= v35 )
            goto _08041E38;
        }
        if ( (unsigned __int16)GiveMoveToMon() == 0xFFFF )
          DeleteFirstMoveAndGiveMoveToMon(v3, *v32);
      }
_08041E38:
      v28 = (unsigned __int16)(v28 + 1);
      if ( v30 > 3u )
        break;
      v23 = word_30004E0;
    }
    while ( word_30004E0[v28] );
  }
  return v36;
}
