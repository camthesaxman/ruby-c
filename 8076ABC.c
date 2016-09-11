int ma0E_call()
{
  int v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = v202F7A4++;
  v202F7A8 = v0 + 5;
  v202F7A4 = *(_BYTE *)(v0 + 1)
           + (*(_BYTE *)(v202F7A4 + 1) << 8)
           + (*(_BYTE *)(v202F7A4 + 2) << 16)
           + (*(_BYTE *)(v202F7A4 + 3) << 24);
  return v2;
}
