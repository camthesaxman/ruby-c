int __fastcall SetTaskFuncWithFollowupFunc(unsigned __int8 a1, int a2, int a3)
{
  int v4; // [sp+8h] [bp-4h]@0

  *(_WORD *)&byte_3004B28[40 * a1 + 28] = a3;
  *(_WORD *)&byte_3004B28[40 * a1 + 30] = HIWORD(a3);
  dword_3004B20[10 * a1] = a2;
  return v4;
}
