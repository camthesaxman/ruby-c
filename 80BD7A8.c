int sub_80BD7A8()
{
  int v0; // r3@1
  int v1; // r2@2
  int v2; // r1@2
  unsigned int v3; // r1@2
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 36 * v0;
    v2 = 36 * v0 + 33707828;
    *(_BYTE *)(v2 + 10040) = 0;
    *(_BYTE *)(v2 + 10041) = 0;
    v3 = 0;
    LOBYTE(v0) = v0 + 1;
    do
    {
      *(_BYTE *)(v3 + v1 + 33717870) = 0;
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 0x21 );
    v0 = (unsigned __int8)v0;
  }
  while ( (unsigned __int8)v0 <= 0x18u );
  sub_80BEBF4();
  return v5;
}
