int sub_81291F8()
{
  int v1; // [sp+8h] [bp-4h]@0

  sub_81290EC();
  if ( v20192FC == (signed __int16)(*v2039238 | (unsigned __int16)(*(_BYTE *)(v2039238 + 1) << 8)) )
    v2039238 += 6;
  else
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
