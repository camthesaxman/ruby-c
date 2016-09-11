int __fastcall HandleExtCtrlCode(int a1)
{
  unsigned __int16 v1; // r2@1

  v1 = *(_WORD *)(a1 + 30);
  *(_WORD *)(a1 + 30) = v1 + 1;
  return (unsigned __int8)call_via_r1(a1, *(&sExtCtrlCodeFuncs + *(_BYTE *)(*(_DWORD *)(a1 + 32) + v1)));
}
