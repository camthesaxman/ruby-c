int __fastcall sub_80AFB74(signed __int16 a1)
{
  int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 / 10 << 24;
  v2 = (unsigned int)v1 >> 24;
  if ( v1 >> 24 <= 16 )
  {
    if ( v1 >> 24 < -16 )
      LOBYTE(v2) = -16;
  }
  else
  {
    LOBYTE(v2) = 16;
  }
  return (char)v2;
}
