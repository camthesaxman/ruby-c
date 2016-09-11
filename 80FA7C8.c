signed int __fastcall sub_80FA7C8(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1

  v1 = a1;
  v2 = 0;
  do
  {
    if ( sub_80FA7FC(v1, 8 * v2 + 33719564) << 24 )
      return 1;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 4 );
  return 0;
}
