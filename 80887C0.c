signed int __fastcall sub_80887C0(int a1)
{
  signed int result; // r0@2
  int v2; // r2@4
  int v3; // r6@4
  unsigned int v4; // r3@4

  if ( (signed int)*(_WORD *)(a1 + 16) <= 31 )
  {
    if ( ((*(_WORD *)(a1 + 14) << 16 >> 19) & 0xFFFF) >= *(_WORD *)(a1 + 16) )
    {
      v2 = (*(_WORD *)(a1 + 10) << 16 >> 19) & 0x1F;
      v3 = *(_WORD *)(a1 + 32) + 100663616;
      v4 = 0;
      do
      {
        *(_WORD *)(2 * (32 * v4 + v2) + v3) = -4096;
        *(_WORD *)(2 * (32 * v4 + ((v2 + 1) & 0x1F)) + v3) = -4096;
        v4 = (v4 + 1) & 0xFFFF;
      }
      while ( v4 <= 9 );
      *(_WORD *)(a1 + 16) += 2;
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
