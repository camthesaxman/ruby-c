signed int __fastcall sub_810341C(unsigned __int8 a1)
{
  int v1; // r9@1
  int v2; // r5@1
  __int16 v3; // r8@1
  __int16 v4; // r7@1
  __int16 v5; // r4@2

  v1 = a1;
  LOWORD(v2) = 0;
  v3 = v2000036;
  v4 = v2000036;
  do
  {
    v5 = v2;
    if ( (unsigned __int8)sub_8102BF8(2u, v4 - v2) == v1 )
    {
      v2000038 = v3;
      v2000032 = v2;
      return 1;
    }
    v2 = ((signed __int16)v2 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v5 + 1) <= 4 );
  return 0;
}
