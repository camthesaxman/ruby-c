int __fastcall sub_80C5964(unsigned __int16 a1)
{
  unsigned int v1; // r1@1

  v1 = 1;
  do
  {
    if ( a1 < (unsigned int)gUnknown_083D180C[4 * v1 + 2] )
      return (v1 - 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xE );
  return v1;
}
