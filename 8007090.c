int __fastcall InitLinkTestBG(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r4@1
  signed int v5; // r5@1
  int v6; // r8@1
  int v7; // r6@1
  int v8; // r7@1
  _WORD *v9; // r2@7
  int v11; // [sp+14h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  LoadPalette(&sLinkTestDigitPalette, 16 * a1, 32);
  v40000D4 = &sLinkTestDigitTiles;
  v40000D8 = (v8 << 14) + 100663296;
  v40000DC = -2147483376;
  gLinkTestBGInfo = v7;
  dword_3002FB4 = v4;
  if ( v5 == 2 )
  {
    v9 = (_WORD *)67108876;
  }
  else if ( v5 > 2 )
  {
    if ( v6 != 3 )
      return v11;
    v9 = (_WORD *)67108878;
  }
  else
  {
    if ( v5 != 1 )
      return v11;
    v9 = (_WORD *)67108874;
  }
  *v9 = ((_WORD)v7 << 8) | 1 | 4 * v8;
  return v11;
}
