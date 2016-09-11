int __fastcall sub_80EAC48(int result)
{
  *(_WORD *)result += *(_WORD *)(result + 4);
  *(_WORD *)(result + 2) += *(_WORD *)(result + 6);
  return result;
}
