int contest_ai_get_used_combo_starter()
{
  unsigned int v0; // r6@1
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r1@2
  int v5; // [sp+Ch] [bp-4h]@0

  LOWORD(v0) = 0;
  v1 = sub_8128A7C(*(_BYTE *)(v2039238 + 1)) << 24;
  v2 = v1 >> 24;
  if ( sub_80B214C(BYTE3(v1)) << 24 )
  {
    v3 = gContestMoves[8 * *(_WORD *)(28 * v2 + 0x2019268) + 2];
    v0 = (-v3 | v3) >> 31;
  }
  v20192FC = v0;
  v2039238 += 2;
  return v5;
}
