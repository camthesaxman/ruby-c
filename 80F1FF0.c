int sub_80F1FF0()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2000311 == 1 )
  {
    v4000044 = *(_WORD *)(2 * v2006DAD + 0x2000314);
    v4000054 = gSineTable[v2000312] << 16 >> 21;
    v2000312 = (v2000312 + 3) & 0x7F;
  }
  else if ( v2000311 == 2 )
  {
    v4000052 = gUnknown_083E42F8[v2000312];
    if ( v2000312 <= 0xEu )
      ++v2000312;
  }
  return v1;
}
