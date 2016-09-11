int sub_8020C14()
{
  int result; // r0@1

  result = *(_BYTE *)(v2024C10 + 4) << 24;
  v2024C10 = *(_BYTE *)(v2024C10 + 1) + (*(_BYTE *)(v2024C10 + 2) << 8) + (*(_BYTE *)(v2024C10 + 3) << 16) + result;
  return result;
}
