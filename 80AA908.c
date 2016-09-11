unsigned int __fastcall sub_80AA908(int a1, unsigned __int8 a2, char a3)
{
  int v3; // r2@1
  unsigned int result; // r0@1
  signed int v5; // r2@1

  v3 = (a3 + a2) << 16;
  result = (unsigned int)v3 >> 16;
  v5 = v3 >> 16;
  if ( v5 <= 255 )
  {
    if ( v5 < 0 )
      LOBYTE(result) = 0;
  }
  else
  {
    LOBYTE(result) = -1;
  }
  return (unsigned __int8)result;
}
