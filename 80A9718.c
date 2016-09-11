signed int __fastcall sub_80A9718(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v2; // r3@1

  a2 = (unsigned __int16)a2;
  v2 = 0;
  do
  {
    if ( *(_WORD *)(4 * v2 + 0x2025BCC) == a1 && *(_WORD *)(4 * v2 + 0x2025BCE) >= a2 )
      return 1;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0x31 );
  return 0;
}
