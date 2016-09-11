int sub_8035428()
{
  int v0; // r5@1
  _WORD *v1; // r0@1
  int v2; // r0@2
  int v3; // r4@2
  char v4; // r1@4
  _WORD *v5; // r2@7
  char v6; // r0@14
  __int16 v7; // r4@14
  char v8; // r0@18
  __int16 v9; // r0@18
  __int16 v10; // r0@19
  int v12; // [sp+Ch] [bp-4h]@0

  v0 = (v2024A60 << 9) + 33700452;
  v1 = (_WORD *)(v20239F8 & 0x498);
  if ( v20239F8 & 0x498 )
  {
    v2 = sub_810715C();
    v3 = sub_81072A8(v2) & 0xFF;
    if ( v3 == 4 )
    {
      v4 = 3;
    }
    else
    {
      if ( v3 != 5 )
      {
        v5 = (_WORD *)(v0 + 2 * v3);
        if ( gBattleMoves[12 * *v5 + 6] & 0x12 )
          v2024C08 = v2024A60;
        if ( gBattleMoves[12 * *v5 + 6] & 8 )
        {
          v2024C08 = battle_get_side_with_given_state(0);
          if ( v2024C0C & gBitTable[v2024C08] )
            v2024C08 = battle_get_side_with_given_state(2);
        }
        dp01_build_cmdbuf_x21_a_bb(1u, 10, v3 | (v2024C08 << 8));
        goto _080354E0;
      }
      v4 = 4;
    }
    dp01_build_cmdbuf_x21_a_bb(1u, v4, 0);
_080354E0:
    sub_80334EC();
    return v12;
  }
  do
  {
    v6 = Random(v1);
    v7 = v6 & 3;
    v1 = (_WORD *)(v0 + 2 * (v6 & 3));
  }
  while ( !*v1 );
  if ( gBattleMoves[12 * *v1 + 6] & 0x12 )
  {
    dp01_build_cmdbuf_x21_a_bb(1u, 10, v7 | (v2024A60 << 8));
  }
  else if ( v20239F8 & 1 )
  {
    v8 = Random(v20239F8 & 1);
    v9 = battle_get_side_with_given_state(v8 & 2);
    dp01_build_cmdbuf_x21_a_bb(1u, 10, (v9 << 8) | v7);
  }
  else
  {
    v10 = battle_get_side_with_given_state(0);
    dp01_build_cmdbuf_x21_a_bb(1u, 10, (v10 << 8) | v7);
  }
  sub_80334EC();
  return v12;
}
