signed int __fastcall sub_8062180(int a1, int a2)
{
  signed int result; // r0@1

  *(_BYTE *)(a1 + 1) &= 0xFDu;
  result = 1;
  *(_WORD *)(a2 + 50) = 1;
  return result;
}
