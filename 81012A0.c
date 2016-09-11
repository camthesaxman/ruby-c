int sub_81012A0()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r7@1
  int v2; // r6@1
  unsigned int v3; // r5@1
  int v5; // [sp+18h] [bp-4h]@0

  v0 = *(_BYTE *)(v201F004 + *(_BYTE *)(8 * v2039234 + 0x20391B4));
  v1 = v0 >> 4;
  v2 = v0 & 0xF;
  v3 = 0;
  while ( *(_WORD *)(24 * v3 + 0x2026358) != v1
       || *(_WORD *)(24 * v3 + 0x202635A) != v2
       || FlagGet(*(_WORD *)(24 * v3 + 0x2026368)) << 24 )
  {
    v3 = (v3 + 1) & 0xFFFF;
    if ( v3 > 0x3F )
      return v5;
  }
  *(_WORD *)(8 * v2039234 + 0x20391B8) = *(_WORD *)(24 * v3 + 0x2026368);
  return v5;
}
