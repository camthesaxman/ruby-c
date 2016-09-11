int ReadPlttIntoBuffers()
{
  unsigned int v0; // r4@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_WORD *)(2 * v0 + 0x202EAC8) = *(_WORD *)(2 * v0 + 0x5000000);
    *(_WORD *)(2 * v0 + 0x202EEC8) = *(_WORD *)(2 * v0 + 0x5000000);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x1FF );
  return v2;
}
