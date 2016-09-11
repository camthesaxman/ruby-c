int __fastcall sub_8102D5C(__int16 a1)
{
  __int16 v1; // r4@1
  int result; // r0@1

  v1 = a1;
  LOWORD(result) = v2000014 % 20;
  if ( v2000014 % 20 )
  {
    if ( (signed __int16)result < v1 )
      v1 = v2000014 % 20;
    sub_8102D28(v1);
    result = v2000014 % 20 & 0xFFFF;
  }
  return (signed __int16)result;
}
