int sub_80F35B4()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v20076B0 = 28;
  v20076B2 = 19;
  v0 = sub_80F727C();
  sub_80F7404(v0);
  v1 = sub_80F7920(27);
  *(_BYTE *)(v1 + 5) |= 0xCu;
  *(_WORD *)(v1 + 32) = 192;
  *(_WORD *)(v1 + 34) = 32;
  *(_DWORD *)(v1 + 28) = sub_80F363C;
  v20076AC = v1;
  return v3;
}
