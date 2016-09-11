int __fastcall sub_81186E8(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int result; // r0@2
  signed int v5; // r0@4

  v1 = a1;
  v2 = (signed __int16)sub_811866C(a1) % 30;
  v3 = (signed __int16)v2;
  if ( (signed __int16)v2 == 14 )
  {
    result = 0;
    *(_WORD *)(v1 + 50) = 0;
  }
  else
  {
    if ( (signed __int16)v2 > 13 )
      v5 = 43;
    else
      v5 = 14;
    result = (v5 - v3) & 0xFFFF;
    *(_WORD *)(v1 + 50) = result;
    result = (signed __int16)result;
  }
  return result;
}
