int contest_ai_check_move_has_highest_appeal()
{
  signed int v0; // r6@1
  _WORD *v1; // r1@1
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = (_WORD *)((v2019325 << 6) + 33785230);
  do
  {
    if ( *v1
      && gContestEffects[4 * gContestMoves[8 * *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E)] + 1] < (unsigned int)gContestEffects[4 * gContestMoves[8 * *v1] + 1] )
    {
      break;
    }
    ++v1;
    ++v0;
  }
  while ( v0 <= 3 );
  v20192FC = v0 == 4;
  ++v2039238;
  return v3;
}
