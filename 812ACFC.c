int contest_ai_check_for_exciting_move()
{
  signed __int16 v0; // r5@1
  int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  while ( !*(_WORD *)(2 * v1 + (v2019325 << 6) + 0x203858E)
       || (char)contest_get_move_excitement(*(_WORD *)(2 * v1 + (v2019325 << 6) + 0x203858E)) != 1 )
  {
    if ( ++v1 > 3 )
      goto _0812AD36;
  }
  v0 = 1;
_0812AD36:
  v20192FC = v0;
  ++v2039238;
  return v3;
}
