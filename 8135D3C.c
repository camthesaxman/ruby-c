unsigned int __fastcall sub_8135D3C(int a1)
{
  unsigned int result; // r0@1

  result = (7 * (*(_WORD *)((2 * a1 & 0x1FF) + 0x2025400) - 1) + 0xFFFF + *(_WORD *)((2 * a1 & 0x1FF) + 0x20253FC)) & 0xFFFF;
  if ( result > 0x270F )
    result = 9999;
  return result;
}
