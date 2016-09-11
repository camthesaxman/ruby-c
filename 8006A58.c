int __fastcall StringGetEnd10(int a1)
{
  int v1; // r3@1
  unsigned int v2; // r2@1
  int result; // r0@3

  v1 = a1;
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(a1 + v2) == 255 )
      return a1 + v2;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 0xA );
  result = a1 + v2;
  *(_BYTE *)(v1 + v2) = -1;
  return result;
}
