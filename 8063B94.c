signed int __fastcall GetReflectionTypeByMetatileBehavior(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r4@1
  signed int result; // r0@2

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( MetatileBehavior_IsIce(SBYTE3(v1)) << 24 )
  {
    result = 1;
  }
  else if ( MetatileBehavior_IsReflective(v2) << 24 )
  {
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
