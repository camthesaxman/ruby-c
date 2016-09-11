signed int __fastcall ExtCtrlCode_SetCursorY(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r1@1

  v1 = a1;
  ClipRight(a1);
  v2 = *(_WORD *)(v1 + 30);
  *(_WORD *)(v1 + 30) = v2 + 1;
  AddToCursorY(v1, 8 * *(_BYTE *)(*(_DWORD *)(v1 + 32) + v2) & 0xFF);
  return 1;
}
