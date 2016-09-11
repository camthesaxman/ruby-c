int ContestEffect_36()
{
  int v0; // r4@2
  int v1; // r7@2
  _BYTE *v2; // r3@4
  int v4; // [sp+18h] [bp-4h]@0

  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v0 = 0;
    v1 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v20192E1 + 0x20192D0) - 1 == *(_BYTE *)(v0 + 33657552) )
      {
        v2 = &gContestMoves[8 * *(_WORD *)(28 * v20192E1 + 0x2019266)];
        if ( v2[1] << 29 != gContestMoves[8 * *(_WORD *)(v1 + 33657446) + 1] << 29 )
          break;
      }
      v1 += 28;
      if ( ++v0 > 3 )
        return v4;
    }
    *(_WORD *)(28 * v20192E1 + 0x2019262) += 2 * gContestEffects[4 * *v2 + 1];
    sub_80B13EC(v20192E1, 32);
  }
  return v4;
}
