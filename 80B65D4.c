int __fastcall sub_80B65D4(int result, unsigned __int8 a2, unsigned __int8 a3)
{
  *(_WORD *)(result + 8) = a2;
  *(_WORD *)(result + 10) = a3;
  *(_WORD *)(result + 12) = 1;
  *(_WORD *)(result + 14) = 15;
  *(_WORD *)(result + 16) = 1;
  *(_WORD *)(result + 18) = 0;
  return result;
}
