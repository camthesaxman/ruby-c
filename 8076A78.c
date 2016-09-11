signed int sub_8076A78()
{
  int v0; // r1@1
  __int16 v1; // r3@1
  signed int result; // r0@1

  v0 = ++v202F7A4;
  v1 = *v202F7A4;
  ++v202F7A4;
  LOWORD(v0) = *(_BYTE *)(v0 + 1) << 8;
  ++v202F7A4;
  result = 67108944;
  v4000050 = v1 | v0;
  return result;
}
