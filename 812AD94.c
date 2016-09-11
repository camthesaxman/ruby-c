int sub_812AD94()
{
  int v1; // [sp+0h] [bp-4h]@0

  contest_ai_check_for_exciting_move();
  if ( v20192FC )
    v2039238 += 4;
  else
    v2039238 = *v2039238 | (*(_BYTE *)(v2039238 + 1) << 8) | (*(_BYTE *)(v2039238 + 2) << 16) | (*(_BYTE *)(v2039238 + 3) << 24);
  return v1;
}
