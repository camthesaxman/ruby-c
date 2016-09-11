signed int __fastcall unref_sub_80BB724(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r2@1

  v2 = 0;
  do
  {
    if ( (*(_WORD *)(2 * v2 + a1) & 0xFFF) == a2 )
      return (signed __int16)v2;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x1FF );
  return -1;
}
