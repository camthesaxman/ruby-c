_BOOL4 __fastcall sub_8064824(int a1)
{
  int v1; // r1@1

  v1 = *(_WORD *)(a1 + 52) - 1;
  *(_WORD *)(a1 + 52) = v1;
  return v1 << 16 == 0;
}
