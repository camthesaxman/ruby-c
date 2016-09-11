int contest_ai_get_move_used_count()
{
  __int16 v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E) == *(_WORD *)(28 * v2019325 + 0x2019268) )
    v0 = ((unsigned int)*(_BYTE *)(28 * v2019325 + 0x201926B) << 25 >> 29) + 1;
  else
    v0 = 0;
  v20192FC = v0;
  ++v2039238;
  return v2;
}
