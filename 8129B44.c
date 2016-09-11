int contest_ai_check_combo_starter()
{
  int v0; // r5@1
  int v1; // r6@1
  int v2; // r4@1
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E);
  v2 = 0;
  while ( 1 )
  {
    if ( *(_WORD *)(2 * v2 + (v2019325 << 6) + 0x203858E) )
    {
      v0 = (unsigned __int8)AreMovesContestCombo(v1, *(_WORD *)(2 * v2 + (v2019325 << 6) + 0x203858E));
      if ( v0 )
        break;
    }
    if ( ++v2 > 3 )
    {
      if ( !v0 )
        goto _08129B96;
      break;
    }
  }
  LOWORD(v0) = 1;
_08129B96:
  v20192FC = v0;
  ++v2039238;
  return v4;
}
