int atk38_bicword()
{
  _DWORD *v0; // r3@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = (_DWORD *)(*(_BYTE *)(v2024C10 + 1)
                + (*(_BYTE *)(v2024C10 + 2) << 8)
                + (*(_BYTE *)(v2024C10 + 3) << 16)
                + (*(_BYTE *)(v2024C10 + 4) << 24));
  *v0 &= ~(*(_BYTE *)(v2024C10 + 5)
         + (*(_BYTE *)(v2024C10 + 6) << 8)
         + (*(_BYTE *)(v2024C10 + 7) << 16)
         + (*(_BYTE *)(v2024C10 + 8) << 24));
  v2024C10 += 9;
  return v2;
}
