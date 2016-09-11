int sub_810970C()
{
  int result; // r0@1

  result = *(_BYTE *)(v2039238 + 4) << 24;
  v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | result;
  return result;
}
