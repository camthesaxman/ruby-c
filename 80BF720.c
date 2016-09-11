signed int __fastcall sub_80BF720(int a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( !*(_BYTE *)(36 * v1 + a1) )
      return (char)v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 4 );
  return -1;
}
