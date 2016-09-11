int __fastcall contest_get_move_excitement(int a1)
{
  return *(&gContestExcitementTable[5 * v203869C] + (gContestMoves[(8 * a1 & 0x7FFFF) + 1] & 7));
}
