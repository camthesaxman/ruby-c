int sub_80EFDE4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+2Ch] [bp-4h]@0

  v0 = (60 - v200769C) & 0xFFFF;
  if ( v0 > 0xF )
    v0 = 15;
  if ( v200769E )
  {
    sub_8095C8C(100726784, 0xEu, 16, (int)&gUnknown_08E9ABB4, v200769C, 0, v0, 1u, 0x3Cu);
    if ( v0 <= 0xE )
      sub_8095C8C(100726784, v0 + 14, 16, (int)&gUnknown_08E9ABB4, 0, 0, 15 - v0, 1u, 0x3Cu);
  }
  return v2;
}
