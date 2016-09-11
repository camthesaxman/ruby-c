int __fastcall oamt_set_x3A_32(int result, int a2)
{
  *(_WORD *)(result + 58) = a2;
  *(_WORD *)(result + 60) = HIWORD(a2);
  return result;
}
