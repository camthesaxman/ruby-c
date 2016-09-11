signed int __fastcall sub_80792C0(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r8@1
  signed int v8; // r4@1
  unsigned __int8 v9; // r0@5
  unsigned __int8 v10; // r0@8
  unsigned __int8 v11; // r0@11
  unsigned __int8 v12; // r0@14

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = 0;
  if ( sub_8076BE0() << 24 )
  {
    if ( v4 )
      v8 = 0x40000;
  }
  else
  {
    if ( v4 )
    {
      v9 = battle_get_side_with_given_state(0);
      if ( b_side_obj__get_some_boolean(v9) << 24 )
        v8 = 1 << (battle_get_side_with_given_state(0) + 16);
    }
    if ( v5 )
    {
      v10 = battle_get_side_with_given_state(2u);
      if ( b_side_obj__get_some_boolean(v10) << 24 )
        v8 |= 1 << (battle_get_side_with_given_state(2u) + 16);
    }
    if ( v6 )
    {
      v11 = battle_get_side_with_given_state(1u);
      if ( b_side_obj__get_some_boolean(v11) << 24 )
        v8 |= 1 << (battle_get_side_with_given_state(1u) + 16);
    }
    if ( v7 )
    {
      v12 = battle_get_side_with_given_state(3u);
      if ( b_side_obj__get_some_boolean(v12) << 24 )
        v8 |= 1 << (battle_get_side_with_given_state(3u) + 16);
    }
  }
  return v8;
}
