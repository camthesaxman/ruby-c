int __fastcall StringCopyN(int a1, int a2, int a3)
{
  unsigned int v3; // r2@1
  unsigned int v4; // r5@1
  unsigned int v5; // r3@1
  unsigned int v6; // r2@2

  v3 = a3 << 24;
  v4 = v3 >> 24;
  v5 = 0;
  if ( v3 >> 24 > 0 )
  {
    v6 = v3 >> 24;
    do
    {
      *(_BYTE *)(a1 + v5) = *(_BYTE *)(a2 + v5);
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 < v6 );
  }
  return a1 + v4;
}
