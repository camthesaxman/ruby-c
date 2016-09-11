int __fastcall InitWindow(int a1, int a2, __int16 a3, char a4, __int16 a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v8; // [sp+10h] [bp-4h]@0

  v5 = a1;
  v6 = *(_DWORD *)(a1 + 44);
  *(_BYTE *)a1 = *(_BYTE *)(v6 + 9);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(v6 + 8);
  *(_BYTE *)(a1 + 2) = 2;
  *(_BYTE *)(a1 + 6) = *(_BYTE *)(v6 + 4);
  *(_BYTE *)(a1 + 11) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 13) = 0;
  *(_BYTE *)(a1 + 14) = *(_BYTE *)(v6 + 10);
  *(_BYTE *)(a1 + 15) = 0;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(v6 + 11);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 12);
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(v6 + 13);
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(v6 + 14);
  *(_DWORD *)(a1 + 32) = a2;
  *(_WORD *)(a1 + 30) = 0;
  *(_WORD *)(a1 + 26) = a3;
  *(_WORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 18) = 8 * a4;
  *(_BYTE *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 20) = 8 * a5 & 0x7FF;
  *(_BYTE *)(a1 + 17) = 0;
  *(_WORD *)(a1 + 22) = 1;
  *(_WORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v6 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v6 + 20);
  InitColors();
  SetBackgroundColor(v5, *(_BYTE *)(v6 + 6));
  SetShadowColor(v5, *(_BYTE *)(v6 + 7));
  SetForegroundColor(v5, *(_BYTE *)(v6 + 5));
  return v8;
}
