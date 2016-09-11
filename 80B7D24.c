int __fastcall AreMovesContestCombo(int a1, int a2)
{
  int v2; // r4@1
  _BYTE *v3; // r1@1
  int v4; // r1@1
  int result; // r0@6
  unsigned __int8 v6; // [sp+0h] [bp-Ch]@1
  unsigned __int8 v7; // [sp+1h] [bp-Bh]@1
  unsigned __int8 v8; // [sp+2h] [bp-Ah]@1

  v2 = gContestMoves[(8 * a1 & 0x7FFFF) + 2];
  v3 = &gContestMoves[8 * a2 & 0x7FFFF];
  v6 = v3[3];
  v7 = v3[4];
  v8 = v3[5];
  v4 = v3[6];
  if ( gContestMoves[(8 * a1 & 0x7FFFF) + 2] && (v2 == v6 || v2 == v7 || v2 == v8 || v2 == v4) )
    result = gComboStarterLookupTable[v2];
  else
    result = 0;
  return result;
}
