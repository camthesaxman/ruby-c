signed int __fastcall sub_80BF74C(int a1)
{
  int v1; // r2@1
  int v2; // r1@1
  signed int v4; // r0@4

  v1 = a1;
  LOBYTE(v2) = 5;
  do
  {
    v2 = (char)v2;
    if ( !*(_BYTE *)(36 * (char)v2 + v1) )
      return v2;
    v4 = (v2 + 1) << 24;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v4 >> 24 <= 23 );
  return -1;
}
