int __fastcall GetStringWidthGivenWindowConfig(int a1, int a2)
{
  _BYTE *v2; // r5@1

  v2 = (_BYTE *)a2;
  dword_3000354 = a1;
  InitWindow((int)&sTempWindow, a2, 0, 0, 0);
  return (unsigned __int8)GetStringWidth((int)&sTempWindow, v2);
}
