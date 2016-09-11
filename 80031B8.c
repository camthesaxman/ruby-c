signed int __fastcall ExtCtrlCode_WaitButton(int a1)
{
  int v1; // r4@1

  v1 = a1;
  ClipRight(a1);
  *(_WORD *)(v1 + 22) = 5;
  return 2;
}
