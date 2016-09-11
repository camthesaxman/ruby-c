_BOOL4 sub_8056618()
{
  int v0; // r2@1
  unsigned int v1; // r1@1

  v0 = 0;
  v1 = 0;
  do
  {
    v0 |= *(_WORD *)(2 * v1 + 0x2025768);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0x1FF );
  return v0 == 0;
}
