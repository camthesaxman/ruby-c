int sub_8020F90()
{
  _BYTE *v0; // r1@1
  int result; // r0@1

  v0 = (_BYTE *)(*(_BYTE *)(v2024C10 + 1)
               + (*(_BYTE *)(v2024C10 + 2) << 8)
               + (*(_BYTE *)(v2024C10 + 3) << 16)
               + (*(_BYTE *)(v2024C10 + 4) << 24));
  *v0 -= *(_BYTE *)(v2024C10 + 5);
  result = v2024C10 + 6;
  v2024C10 += 6;
  return result;
}
