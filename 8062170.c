signed int __fastcall sub_8062170(int a1, int a2)
{
  signed int result; // r0@1

  *(_BYTE *)(a1 + 1) |= 2u;
  result = 1;
  *(_WORD *)(a2 + 50) = 1;
  return result;
}
