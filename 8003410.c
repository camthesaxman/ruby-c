signed int __fastcall ExtCtrlCode_Latin(int a1)
{
  *(_BYTE *)(a1 + 2) = 2;
  return 2;
}
