_BOOL4 __fastcall sub_8057494(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (unsigned __int8)MetatileBehavior_IsSurfableWaterOrUnderwater(BYTE3(v1)) == 1
      && (unsigned __int8)sub_8056DA0(v2) == 1;
}
