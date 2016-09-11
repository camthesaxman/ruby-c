signed int sub_8103E7C()
{
  unsigned int v0; // r4@1

  v0 = 0;
  do
  {
    if ( !(sub_8103EAC(*(_BYTE *)(v0 + 33554500)) << 24) )
      return 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return 1;
}
