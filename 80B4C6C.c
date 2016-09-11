int __fastcall RemoveBerryTree(int a1)
{
  int result; // r0@1

  result = (8 * a1 & 0x7FF) + 33713468;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
