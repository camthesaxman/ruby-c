int sub_8107E10()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2016802 == (*(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8)) )
    v2039238 += 7;
  else
    v2039238 = *(_BYTE *)(v2039238 + 3) | (*(_BYTE *)(v2039238 + 4) << 8) | (*(_BYTE *)(v2039238 + 5) << 16) | (*(_BYTE *)(v2039238 + 6) << 24);
  return v1;
}