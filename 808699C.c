signed int __fastcall sub_808699C(int a1)
{
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 10) = 4;
  *(_WORD *)(a1 + 12) = 0;
  SetCameraPanningCallback(0);
  return 1;
}
