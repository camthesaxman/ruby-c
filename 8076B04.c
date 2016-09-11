int ma10_080736AC()
{
  int v0; // r1@1
  int v1; // r0@1
  int v2; // r2@1
  __int16 v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = v202F7A4;
  v2 = *v202F7A4;
  v3 = *(_BYTE *)(v1 + 1) | (unsigned __int16)(*(_BYTE *)(++v202F7A4 + 1) << 8);
  v202F7A4 = v0 + 4;
  word_3004B00[v2] = v3;
  return v5;
}
