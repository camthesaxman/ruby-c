int atk34_orhalfword()
{
  _WORD *v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = (_WORD *)(*(_BYTE *)(v2024C10 + 1)
               + (*(_BYTE *)(v2024C10 + 2) << 8)
               + (*(_BYTE *)(v2024C10 + 3) << 16)
               + (*(_BYTE *)(v2024C10 + 4) << 24));
  *v0 |= *(_BYTE *)(v2024C10 + 5) | (unsigned __int16)(*(_BYTE *)(v2024C10 + 6) << 8);
  v2024C10 += 7;
  return v2;
}
