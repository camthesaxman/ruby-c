int sub_810752C()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( ((Random() << 16) & 0xFF0000) >> 16 >= *(_BYTE *)(v2039238 + 1) )
    v2039238 += 6;
  else
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
