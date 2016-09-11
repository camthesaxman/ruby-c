signed int __fastcall sub_806282C(int a1, int a2)
{
  signed int result; // r0@1

  *(_BYTE *)(a1 + 3) &= 0xFBu;
  result = 1;
  *(_WORD *)(a2 + 50) = 1;
  return result;
}
