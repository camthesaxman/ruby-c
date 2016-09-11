int IsPlayerFacingSurfableFishableWater()
{
  int *v0; // r4@1
  unsigned __int8 v1; // r0@3
  int result; // r0@4
  __int16 v3; // [sp+0h] [bp-10h]@1
  __int16 v4; // [sp+2h] [bp-Eh]@1

  v0 = &dword_30048A0[9 * v202E85D];
  v3 = *((_WORD *)v0 + 8);
  v4 = *((_WORD *)v0 + 9);
  MoveCoords(*((_BYTE *)v0 + 24) & 0xF, &v3, &v4);
  result = 0;
  if ( (unsigned __int8)npc_block_way(v0, v3, v4, *((_BYTE *)v0 + 24) & 0xF) == 3
    && (unsigned __int8)PlayerGetZCoord() == 3 )
  {
    v1 = MapGridGetMetatileBehaviorAt(v3, v4);
    if ( MetatileBehavior_IsSurfableFishableWater(v1) << 24 )
      result = 1;
  }
  return result;
}
