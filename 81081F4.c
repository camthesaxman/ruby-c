int sub_81081F4()
{
  int v0; // r3@1
  __int16 *v1; // r1@2
  int v2; // r6@7
  int v3; // r3@8
  int v4; // r8@8
  int v5; // r10@8
  __int16 *v6; // r1@9
  int v7; // r0@15
  signed int v8; // r6@19
  int *v9; // r2@20
  int v11[4]; // [sp+0h] [bp-34h]@15
  int v12; // [sp+10h] [bp-24h]@7
  int v13; // [sp+30h] [bp-4h]@27

  v0 = 0;
  if ( (unsigned __int16)gUnknown_083F62BC[0] != 0xFFFF )
  {
    v1 = gUnknown_083F62BC;
    do
    {
      if ( gBattleMoves[12 * v2016802] == *v1 )
        break;
      ++v1;
      ++v0;
    }
    while ( (unsigned __int16)*v1 != 0xFFFF );
  }
  if ( (unsigned int)gBattleMoves[12 * v2016802 + 1] <= 1 || (unsigned __int16)gUnknown_083F62BC[v0] != 0xFFFF )
  {
    v2016808 = 0;
  }
  else
  {
    v2024DEC = 0;
    v201601C = 0;
    v201601F = 1;
    v2024C68 = 0;
    v2024C0D = 1;
    v2 = 0;
    v12 = (unsigned __int16)gUnknown_083F62BC[0];
    do
    {
      v3 = 0;
      v4 = v2;
      v5 = v2 + 1;
      if ( v12 != 0xFFFF )
      {
        v6 = gUnknown_083F62BC;
        do
        {
          if ( gBattleMoves[12 * *(_WORD *)(2 * v2 + 88 * v2024C07 + 0x2024A8C)] == *v6 )
            break;
          ++v6;
          ++v3;
        }
        while ( (unsigned __int16)*v6 != 0xFFFF );
      }
      if ( *(_WORD *)(2 * v2 + 88 * v2024C07 + 0x2024A8C)
        && (unsigned __int16)gUnknown_083F62BC[v3] == 0xFFFF
        && (unsigned int)gBattleMoves[12 * *(_WORD *)(2 * v2 + 88 * v2024C07 + 0x2024A8C) + 1] > 1 )
      {
        v2024BE6 = *(_WORD *)(2 * v2 + 88 * v2024C07 + 0x2024A8C);
        sub_801CAF8(v2024C07, v2024C08);
        move_effectiveness_something(v2024BE6, v2024C07, v2024C08);
        v7 = v2024BEC * *(_BYTE *)(v2 + 33646616) / 100;
        v11[v4] = v7;
        if ( !v7 )
          v11[v4] = 1;
      }
      else
      {
        v11[v4] = 0;
      }
      ++v2;
    }
    while ( v5 <= 3 );
    v8 = 0;
    if ( v11[0] <= v11[v2016801] )
    {
      v9 = v11;
      do
      {
        ++v9;
        ++v8;
      }
      while ( v8 <= 3 && *v9 <= v11[v2016801] );
    }
    if ( v8 == 4 )
      v2016808 = 2;
    else
      v2016808 = 1;
  }
  ++v2039238;
  return v13;
}
