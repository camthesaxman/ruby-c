signed int __fastcall sub_80FB238(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = v20388CC;
  *(_DWORD *)(v20388CC + 36) = (a1 << 16 >> 8) + 7168;
  *(_DWORD *)(v2 + 40) = (a2 << 16 >> 8) + 9216;
  result = 1;
  *(_BYTE *)(v2 + 125) = 1;
  return result;
}
