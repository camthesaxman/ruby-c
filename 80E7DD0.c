signed int sub_80E7DD0()
{
  int v0; // r4@1
  signed int result; // r0@4
  int v2; // r0@5

  v0 = *(_WORD *)(2 * v200A9A5 + 4 * v200A9A4 + 0x200AA2A);
  if ( v200107D
    && (unsigned int)*(_BYTE *)(v2001086 + 0x200107E) > 1
    && (unsigned __int16)sub_80EB2D4(*(_WORD *)(2 * v200A9A5 + 4 * v200A9A4 + 0x200AA2A)) == 7 )
  {
    result = 0;
  }
  else
  {
    v2 = sub_80E7F00(v2001027, v0);
    sub_80E95A4(v2);
    result = 1;
  }
  return result;
}
