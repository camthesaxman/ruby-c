signed int __fastcall ExtCtrlCode_Pause(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r1@1

  v1 = a1;
  ClipRight(a1);
  *(_WORD *)(v1 + 22) = 4;
  v2 = *(_WORD *)(v1 + 30);
  *(_WORD *)(v1 + 30) = v2 + 1;
  *(_BYTE *)(v1 + 13) = *(_BYTE *)(*(_DWORD *)(v1 + 32) + v2);
  return 2;
}
