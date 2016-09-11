int sub_8036CD4()
{
  int v0; // r0@2
  int v1; // r0@2
  int v2; // r0@4
  char v3; // r0@5
  int v4; // r10@5
  int v5; // r9@8
  signed int v6; // r7@9
  int *v7; // r8@9
  int v8; // r5@10
  char *v9; // r0@17
  unsigned __int8 v10; // r5@17
  unsigned __int8 v11; // r6@17
  signed int v12; // r7@22
  int v13; // r5@22
  unsigned __int16 v14; // r0@23
  int v15; // r0@27
  int v16; // r7@30
  int v17; // r0@31
  signed int v18; // r5@37
  int v19; // r4@38
  int v21; // [sp+0h] [bp-3Ch]@8
  unsigned int v22; // [sp+4h] [bp-38h]@9
  int v23; // [sp+8h] [bp-34h]@9
  int v24; // [sp+Ch] [bp-30h]@2
  int v25; // [sp+10h] [bp-2Ch]@3
  int *v26; // [sp+14h] [bp-28h]@8
  int v27; // [sp+18h] [bp-24h]@31

  if ( v20239F8 & 1 )
  {
    v24 = v2024A60;
    v0 = battle_get_per_side_status(v2024A60);
    v1 = *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state((v0 ^ 2) & 0xFF) & 0x3FF));
    if ( v2024C0C & (unsigned __int8)v1 )
    {
      v25 = v2024A60;
    }
    else
    {
      v2 = battle_get_per_side_status(v2024A60);
      v1 = (unsigned __int8)battle_get_side_with_given_state((v2 ^ 2) & 0xFF);
      v25 = v1;
    }
    v3 = Random(v1);
    v4 = v3 & 2;
    if ( v2024C0C & gBitTable[v4] )
      v4 = (v3 & 2 ^ 2) & 0xFF;
  }
  else
  {
    v4 = battle_get_side_with_given_state(0) & 0xFF;
    v25 = v2024A60;
    v24 = v2024A60;
  }
  v5 = 0;
  v26 = &v21;
  do
  {
    v22 = 0;
    v23 = 6;
    v6 = 0;
    v7 = gBitTable;
    do
    {
      v8 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v6, 11);
      if ( v8
        && GetMonData((char *)&unk_30045C0 + 100 * v6, 57)
        && !(*v7 & v5)
        && *(_WORD *)(2 * v24 + 0x2024A6A) != v6
        && *(_WORD *)(2 * v25 + 0x2024A6A) != v6
        && v6 != *(_BYTE *)(v24 + 33644648)
        && v6 != *(_BYTE *)(v25 + 33644648) )
      {
        v9 = (char *)&gBaseStats + 28 * v8;
        v10 = v9[6];
        v11 = v9[7];
        *(_BYTE *)v26 = 10;
        sub_8036C4C(*(_BYTE *)(88 * v4 + 0x2024AA1), v10, v11, &v21);
        sub_8036C4C(*(_BYTE *)(88 * v4 + 0x2024AA2), v10, v11, &v21);
        if ( v22 < *(_BYTE *)v26 )
        {
          v22 = *(_BYTE *)v26;
          v23 = (unsigned __int8)v6;
        }
      }
      else
      {
        v5 = (v5 | *v7) & 0xFF;
      }
      ++v7;
      ++v6;
    }
    while ( v6 <= 5 );
    if ( v23 == 6 )
    {
      v15 = 63;
    }
    else
    {
      v12 = 0;
      v13 = 100 * v23;
      do
      {
        v14 = GetMonData((char *)&unk_30045C0 + v13, v12 + 13);
        if ( v14 && move_effectiveness_something(v14, v2024A60, v4) & 2 )
          break;
        ++v12;
      }
      while ( v12 <= 3 );
      if ( v12 != 4 )
        return v23;
      v15 = (v5 | gBitTable[v23]) & 0xFF;
    }
    v5 = v15;
  }
  while ( v15 != 63 );
  v2024DEC = 0;
  v201601C = 0;
  v201601F = 1;
  v2024C68 = 0;
  v2024C0D = 1;
  v22 = 0;
  v23 = 6;
  v16 = 0;
  do
  {
    v17 = GetMonData((char *)&unk_30045C0 + 100 * v16, 11);
    v27 = v16 + 1;
    if ( v17 << 16
      && GetMonData((char *)&unk_30045C0 + 100 * v16, 57)
      && *(_WORD *)(2 * v24 + 0x2024A6A) != v16
      && *(_WORD *)(2 * v25 + 0x2024A6A) != v16
      && v16 != *(_BYTE *)(v24 + 33644648)
      && v16 != *(_BYTE *)(v25 + 33644648) )
    {
      v18 = 0;
      do
      {
        v19 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v16, v18 + 13);
        v2024BEC = 0;
        if ( v19 && gBattleMoves[12 * v19 + 1] != 1 )
        {
          sub_801CAF8(v2024A60, v4);
          move_effectiveness_something(v19, v2024A60, v4);
        }
        if ( (signed int)v22 < v2024BEC )
        {
          v22 = v2024BEC;
          v23 = (unsigned __int8)v16;
        }
        ++v18;
      }
      while ( v18 <= 3 );
    }
    v16 = v27;
  }
  while ( v27 <= 5 );
  return v23;
}
