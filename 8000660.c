int SerialIntr()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( dword_3001788 )
    call_via_r0();
  v3007FF8 |= 0x80u;
  word_300178C |= 0x80u;
  return v1;
}
