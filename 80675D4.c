int __fastcall sBF_virtual_load_textbuffer(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  int v3; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_word(a1);
  StringCopy((&gUnknown_083762F0)[4 * v2], (_BYTE *)(v3 - v202E8B0));
  return 0;
}
