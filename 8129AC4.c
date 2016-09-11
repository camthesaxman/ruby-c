int sub_8129AC4()
{
  int v1; // [sp+0h] [bp-4h]@0

  contest_ai_get_move_used_count();
  if ( v20192FC == *v2039238 )
    v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24);
  else
    v2039238 += 5;
  return v1;
}
