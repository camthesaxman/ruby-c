int __fastcall sub_80D5994(int result, __int16 a2, __int16 a3)
{
  *(_WORD *)(result + 46) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_WORD *)(result + 50) = 8 * *(_WORD *)(result + 32);
  *(_WORD *)(result + 52) = 8 * *(_WORD *)(result + 34);
  *(_WORD *)(result + 54) = 8 * a2;
  *(_WORD *)(result + 56) = 8 * a3;
  return result;
}
