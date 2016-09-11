int __fastcall sub_80461D4(__int16 a1, signed __int16 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a1;
  result = a1 * a3 / a2 & 0xFF;
  if ( !result && v3 > 0 )
    result = 1;
  return result;
}
