int sub_8020F3C()
{
  int result; // r0@1

  *(_BYTE *)(*(_BYTE *)(v2024C10 + 1)
           + (*(_BYTE *)(v2024C10 + 2) << 8)
           + (*(_BYTE *)(v2024C10 + 3) << 16)
           + (*(_BYTE *)(v2024C10 + 4) << 24)) = *(_BYTE *)(v2024C10 + 5);
  result = v2024C10 + 6;
  v2024C10 += 6;
  return result;
}
