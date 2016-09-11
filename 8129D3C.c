int contest_ai_check_would_finish_combo()
{
  int v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  if ( *(_WORD *)(28 * v2019325 + 0x2019268) )
    v0 = AreMovesContestCombo(
           *(_WORD *)(28 * v2019325 + 0x2019268),
           *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E)) & 0xFF;
  if ( v0 )
    LOWORD(v0) = 1;
  v20192FC = v0;
  ++v2039238;
  return v2;
}
