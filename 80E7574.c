int sub_80E7574()
{
  int v1; // [sp+8h] [bp-4h]@0

  v200107D = v2001008 == 1
          && *(_BYTE *)(v2001086 + 0x200107E) == 2
          && (sub_80EB2D4(*(_WORD *)(2 * v2001027 + 0x200100C)) & 0xFFFF) != 7;
  v200107D = 0;
  return v1;
}
