_BOOL4 s28_pause_asm()
{
  int v0; // r0@1

  v0 = v202E8B4 - 1;
  --v202E8B4;
  return v0 << 16 == 0;
}
