int sub_80F3698()
{
  int v0; // r1@1
  unsigned __int8 v1; // r2@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = 4 * v20087DC + 33589564;
  v1 = v20076B4;
  *(_BYTE *)(v2008FE9 + 0x2008934) = v20076B4;
  v2 = sub_80F4548(*(_BYTE *)(v0 + 1), *(_DWORD *)v0 << 11 >> 27, v1);
  sub_80F7470(v2);
  return v4;
}
