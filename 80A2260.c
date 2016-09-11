signed int __fastcall sub_80A2260(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r3@1
  _BYTE *v3; // r1@1
  unsigned int v4; // r2@1

  v2 = a2;
  v3 = &byte_3004B28[40 * a1 + 2];
  v4 = 0;
  do
  {
    if ( *v3 == v2 )
      return v4;
    v4 = (v4 + 1) & 0xFF;
    ++v3;
  }
  while ( v4 <= 0xF );
  return 16;
}
