int __fastcall PrintHexDigit(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v4; // [sp+8h] [bp-4h]@0

  *(_WORD *)(2 * ((32 * a3 & 0x1FFF) + a2) + (gLinkTestBGInfo << 11) + 0x6000000) = ((_WORD)dword_3002FB4 << 12) | (a1 + 1);
  return v4;
}
