int __fastcall LinkTestCalcBlockChecksum(int a1, int a2)
{
  int v2; // r3@1
  unsigned int v3; // r2@1
  unsigned int v4; // r1@1

  v2 = 0;
  v3 = 0;
  v4 = (unsigned int)(a2 << 16) >> 17;
  if ( v4 > 0 )
  {
    do
    {
      v2 = (v2 + *(_WORD *)(2 * v3 + a1)) & 0xFFFF;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 < v4 );
  }
  return v2;
}
