signed int __fastcall ExtCtrlCode_Japanese(int a1)
{
  *(_BYTE *)(a1 + 2) = 1;
  return 2;
}
