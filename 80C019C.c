signed int __fastcall sub_80C019C(int a1)
{
  unsigned int v1; // r2@1
  int v2; // r1@2

  v1 = 0;
  do
  {
    v2 = 36 * v1 + a1;
    if ( !*(_BYTE *)(v2 + 1) && ((*(_BYTE *)v2 - 1) & 0xFFu) <= 0x3B )
      return (char)v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x17 );
  return -1;
}
