signed int __fastcall sub_809E508(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1

  v1 = a1;
  v2 = 1;
  do
  {
    if ( sub_809F760(v1, v2) << 16 )
      return 1;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return 0;
}
