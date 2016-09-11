_BOOL4 sub_81485CC()
{
  int v0; // r4@1
  int v1; // r0@1
  int v2; // r0@1

  v0 = dword_3005F20;
  v1 = 2 * ((unsigned __int16)word_3005FB8 - (unsigned __int16)word_3005FA8) & 0x1FFFF;
  *(_WORD *)(dword_3005F20 + 36) = *(_WORD *)(v1 + 0x201D000);
  *(_WORD *)(v0 + 38) = *(_WORD *)(v1 + 33674240);
  v2 = (unsigned __int16)word_3005FA8-- - 1;
  return v2 << 16 == 0;
}
