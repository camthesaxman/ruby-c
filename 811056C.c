unsigned int __fastcall sub_811056C(int a1)
{
  unsigned int result; // r0@1

  result = *(_WORD *)((2 * a1 & 0x1FF) + 0x2025418);
  if ( result > 0x270F )
    result = 9999;
  return result;
}
