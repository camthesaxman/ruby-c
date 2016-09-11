int sub_812ADD8()
{
  signed __int16 v0; // r6@1
  int v1; // r3@1
  int i; // r0@1
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  for ( i = *(_WORD *)((v2019325 << 6) + 0x203858E);
        i != (*(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8));
        i = *(_WORD *)(2 * v1 + (v2019325 << 6) + 0x203858E) )
  {
    if ( ++v1 > 3 )
      goto _0812AE34;
  }
  v0 = 1;
_0812AE34:
  v20192FC = v0;
  v2039238 += 3;
  return v4;
}
