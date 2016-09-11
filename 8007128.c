int __fastcall InitLinkTestBG_Unused(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r8@1
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  int v9; // [sp+10h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  LoadPalette(&sLinkTestDigitPalette, 16 * a1, 32);
  v40000D4 = &sLinkTestDigitTiles;
  v40000D8 = (v7 << 14) + 100663296;
  v40000DC = -2147483376;
  gLinkTestBGInfo = v6;
  dword_3002FB4 = v4;
  *(_WORD *)gBGControlRegs[v5] = ((_WORD)v6 << 8) | 4 * v7;
  return v9;
}
