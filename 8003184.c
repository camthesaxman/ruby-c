signed int __fastcall ExtCtrlCode_DefaultFont(int a1)
{
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(*(_DWORD *)(a1 + 44) + 8);
  return 2;
}
