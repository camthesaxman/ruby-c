int __fastcall sub_8046188(int a1, int a2, signed int a3, int a4)
{
  int v4; // r5@1
  int result; // r0@5

  v4 = a1 - a2;
  if ( a1 - a2 >= 0 )
  {
    if ( v4 > a3 )
      v4 = a3;
  }
  else
  {
    v4 = 0;
  }
  result = (char)(a1 * (8 * a4 & 0xFF) / a3) - (char)(v4 * (8 * a4 & 0xFF) / a3);
  if ( result < 0 )
    result = -result;
  return (unsigned __int8)result;
}
