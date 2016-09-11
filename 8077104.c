int __fastcall sub_8077104(int a1)
{
  signed int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 << 16;
  v2 = (unsigned int)v1 >> 16;
  if ( v1 >> 16 <= 63 )
  {
    if ( v1 >> 16 < -64 )
      LOWORD(v2) = -64;
  }
  else
  {
    LOWORD(v2) = 63;
  }
  return (signed __int16)v2;
}
