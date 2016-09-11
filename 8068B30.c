_BOOL4 __fastcall sub_8068B30(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r4@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (unsigned __int8)is_tile_x69_2_warp_door(SBYTE3(v1)) == 1
      || (unsigned __int8)MetatileBehavior_IsLadder(v2) == 1
      || (unsigned __int8)MetatileBehavior_IsEscalator(v2) == 1
      || (unsigned __int8)sub_8056F08(v2) == 1
      || (unsigned __int8)sub_8057798(v2) == 1
      || (unsigned __int8)is_role_x68(v2) == 1
      || (unsigned __int8)MetatileBehavior_IsAquaHideoutWarp(v2) == 1
      || (unsigned __int8)sub_8057804(v2) == 1;
}
