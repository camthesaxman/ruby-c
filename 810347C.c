signed int __fastcall sub_810347C(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int result; // r0@2
  signed __int16 v3; // r8@4
  int v4; // r5@6
  __int16 v5; // r4@7

  v1 = a1;
  if ( v2000034 == v2000036 )
  {
    result = (unsigned __int8)sub_810341C(a1);
  }
  else
  {
    v3 = 1;
    if ( v2000034 == 1 )
      v3 = 3;
    LOWORD(v4) = 0;
    do
    {
      v5 = v4;
      if ( (unsigned __int8)sub_8102BF8(2u, v3 - v4) == v1 )
      {
        v2000032 = v4;
        v2000038 = v3;
        return 1;
      }
      v4 = ((signed __int16)v4 + 1) & 0xFFFF;
    }
    while ( (signed __int16)(v5 + 1) <= 4 );
    result = 0;
  }
  return result;
}
