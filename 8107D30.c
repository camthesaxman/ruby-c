int sub_8107D30()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2016808 == *(_BYTE *)(*(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24)) )
    v2039238 = *(_BYTE *)(v2039238 + 5) | (*(_BYTE *)(v2039238 + 6) << 8) | (*(_BYTE *)(v2039238 + 7) << 16) | (*(_BYTE *)(v2039238 + 8) << 24);
  else
    v2039238 += 9;
  return v1;
}
