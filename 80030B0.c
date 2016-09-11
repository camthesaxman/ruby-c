signed int __fastcall ExtCtrlCode_ForegroundColor(int a1)
{
  unsigned __int16 v1; // r2@1

  v1 = *(_WORD *)(a1 + 30);
  *(_WORD *)(a1 + 30) = v1 + 1;
  SetForegroundColor(a1, *(_BYTE *)(*(_DWORD *)(a1 + 32) + v1));
  return 2;
}
