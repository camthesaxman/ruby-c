signed int sub_81032E8()
{
  int v0; // r6@1
  __int16 v1; // r8@1
  __int16 v2; // r7@1
  __int16 v3; // r4@2

  LOWORD(v0) = 0;
  v1 = v2000034;
  v2 = v2000034;
  do
  {
    v3 = v0;
    if ( (unsigned __int8)sub_8102BF8(1u, v2 - v0) == v2000007 )
    {
      v2000036 = v1;
      v2000030 = v0;
      return 1;
    }
    v0 = ((signed __int16)v0 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v3 + 1) <= 4 );
  return 0;
}
