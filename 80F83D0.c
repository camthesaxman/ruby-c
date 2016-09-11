int sub_80F83D0()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = GetCurrentMauvilleOldMan();
  VarSet(0x4010u, (((v0 << 16) & 0xFFFFFFu) + 4521984) >> 16);
  return v2;
}
