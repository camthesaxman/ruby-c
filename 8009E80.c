int __fastcall Task_MainMenuProcessKeyInput(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( MainMenuProcessKeyInput(BYTE3(v1)) << 24 )
    dword_3004B20[10 * v2] = (int)Task_HighlightCurrentMenuItem;
  return v4;
}
