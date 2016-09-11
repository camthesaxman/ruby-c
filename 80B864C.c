int ContestEffect_30()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v20192E1 + 0x2038696) == 3 )
  {
    *(_WORD *)(28 * v20192E1 + 0x2019262) += 2
                                           * gContestEffects[4
                                                           * gContestMoves[8 * *(_WORD *)(28 * v20192E1 + 0x2019266)]
                                                           + 1];
    sub_80B13EC(v20192E1, 16);
  }
  return v1;
}
