signed int __fastcall sub_806F7B8(unsigned __int16 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( gUnknown_08376504[v1 + 50] == a1 )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 7 );
  return 0;
}
