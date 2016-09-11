int sub_8076A3C()
{
  int v0; // r1@1
  __int16 v1; // r3@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = ++v202F7A4;
  v1 = *v202F7A4;
  ++v202F7A4;
  LOWORD(v0) = *(_BYTE *)(v0 + 1) << 8;
  ++v202F7A4;
  v4000050 = 16192;
  v4000052 = v1 | v0;
  return v3;
}
