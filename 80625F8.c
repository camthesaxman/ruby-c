signed int __fastcall sub_80625F8(int a1, int a2)
{
  signed int result; // r0@1

  *(_BYTE *)(a1 + 1) |= 0x10u;
  result = 1;
  *(_WORD *)(a2 + 50) = 1;
  return result;
}
