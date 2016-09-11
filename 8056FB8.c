signed int __fastcall unref_sub_8056FB8(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r4@1
  signed int v3; // r5@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = 0;
  if ( MetatileBehavior_IsEastArrowWarp(SBYTE3(v1)) << 24
    || MetatileBehavior_IsWestArrowWarp(v2) << 24
    || MetatileBehavior_IsNorthArrowWarp(v2) << 24
    || MetatileBehavior_IsSouthArrowWarp(v2) << 24 )
  {
    v3 = 1;
  }
  return v3;
}
