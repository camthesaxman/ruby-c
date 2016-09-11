int sub_812A07C()
{
  int v1; // [sp+0h] [bp-4h]@0

  contest_ai_get_used_combo_starter();
  if ( v20192FC == *v2039238 )
    v2039238 += 5;
  else
    v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24);
  return v1;
}
