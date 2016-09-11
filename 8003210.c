signed int __fastcall ExtCtrlCode_Escape(int a1)
{
  void **v1; // r3@1
  unsigned __int16 v2; // r2@1

  v1 = &sPrintGlyphFuncs + *(_BYTE *)a1;
  v2 = *(_WORD *)(a1 + 30);
  *(_WORD *)(a1 + 30) = v2 + 1;
  call_via_r2(a1, *(_BYTE *)(*(_DWORD *)(a1 + 32) + v2), *v1);
  return 1;
}
