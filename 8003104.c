signed int __fastcall ExtCtrlCode_AllColors(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r1@1
  unsigned __int16 v3; // r1@1
  unsigned __int16 v4; // r1@1

  v1 = a1;
  v2 = *(_WORD *)(a1 + 30);
  *(_WORD *)(a1 + 30) = v2 + 1;
  SetForegroundColor(a1, *(_BYTE *)(*(_DWORD *)(a1 + 32) + v2));
  v3 = *(_WORD *)(v1 + 30);
  *(_WORD *)(v1 + 30) = v3 + 1;
  SetBackgroundColor(v1, *(_BYTE *)(*(_DWORD *)(v1 + 32) + v3));
  v4 = *(_WORD *)(v1 + 30);
  *(_WORD *)(v1 + 30) = v4 + 1;
  SetShadowColor(v1, *(_BYTE *)(*(_DWORD *)(v1 + 32) + v4));
  return 2;
}
