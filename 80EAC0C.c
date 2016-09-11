int __fastcall sub_80EAC0C(int result)
{
  *(_WORD *)result += *(_WORD *)(result + 8);
  *(_WORD *)(result + 2) += *(_WORD *)(result + 10);
  *(_WORD *)(result + 4) += *(_WORD *)(result + 12);
  *(_WORD *)(result + 6) += *(_WORD *)(result + 14);
  return result;
}
