signed int __fastcall sub_80625E8(int a1, int a2)
{
  signed int result; // r0@1

  *(_BYTE *)(a1 + 3) |= 2u;
  result = 1;
  *(_WORD *)(a2 + 50) = 1;
  return result;
}
