int sub_80C045C()
{
  unsigned int v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( (unsigned __int8)sub_80BFB54(*(_BYTE *)(36 * v0 + 0x2027E6C)) == 2 )
      *(_BYTE *)(36 * v0 + 0x2027E6D) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return v2;
}
