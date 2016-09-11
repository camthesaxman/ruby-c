_BOOL4 __fastcall sub_805759C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return MetatileBehavior_IsSurfableWaterOrUnderwater(BYTE3(v1)) << 24 && !(MetatileBehavior_IsWaterfall(v2) << 24);
}
