signed int __fastcall sub_81221CC(unsigned __int8 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( *(_BYTE *)(v1 + 33788528) == a1 )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 2 );
  return 0;
}
