int __fastcall Task_HighlightCurrentMenuItem(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  HighlightCurrentMenuItem(*((_BYTE *)v1 + 8), *((_BYTE *)v1 + 10));
  *v1 = (int)Task_MainMenuProcessKeyInput;
  return v3;
}
