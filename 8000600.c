int HBlankIntr()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( dword_3001780 )
    call_via_r0();
  v3007FF8 |= 2u;
  word_300178C |= 2u;
  return v1;
}
