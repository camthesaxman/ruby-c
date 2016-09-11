signed int __fastcall sub_81030A4(__int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  signed int result; // r0@3

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int8)sub_8102BF8(0, a1);
  if ( v5 != v3 && v5 != v4 )
  {
    result = 0;
  }
  else
  {
    v2000007 = v5;
    result = 1;
  }
  return result;
}
