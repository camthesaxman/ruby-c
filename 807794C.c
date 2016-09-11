int sub_807794C()
{
  int v0; // r7@1
  int v1; // r4@3
  int v2; // r4@5
  signed int v3; // r0@5
  unsigned __int8 v4; // r0@7
  char *v5; // r2@8
  int v7; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)(v202F7A4 + 1);
  v202F7A4 += 2;
  if ( !(sub_8076BE0() << 24) )
  {
    if ( battle_type_is_double(0) << 24 )
    {
      v1 = battle_side_get_owner(v202F7C8);
      if ( v1 << 24 == battle_side_get_owner(v202F7C9) << 24 )
      {
        if ( v0 )
        {
          v2 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9);
          v3 = 1;
        }
        else
        {
          v2 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8);
          v3 = 0;
        }
        v4 = obj_id_for_side_relative_to_move(v3);
        if ( v4 != 255 )
        {
          v5 = &gSprites[68 * v4];
          v5[62] &= 0xFBu;
          if ( v2 == 2 )
            v5[5] |= 0xCu;
          if ( v2 == 1 )
            sub_8076464(0);
          else
            sub_8076464(1u);
        }
      }
    }
  }
  return v7;
}
