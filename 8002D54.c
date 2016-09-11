int __fastcall InitWindowFromConfig(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r1@1
  int v6; // r1@1
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0x20000;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a1 + 12;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  v5 = a1 + 24;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  v6 = a1 + 36;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(a1 + 44) = v3;
  *(_BYTE *)a1 = *(_BYTE *)(v3 + 9);
  *(_BYTE *)(a1 + 14) = *(_BYTE *)(v3 + 10);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(v3 + 8);
  *(_BYTE *)(a1 + 6) = *(_BYTE *)(v3 + 4);
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(v3 + 11);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(v3 + 12);
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(v3 + 13);
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(v3 + 14);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v3 + 20);
  InitColors();
  SetBackgroundColor(v2, *(_BYTE *)(v3 + 6));
  SetShadowColor(v2, *(_BYTE *)(v3 + 7));
  SetForegroundColor(v2, *(_BYTE *)(v3 + 5));
  return v8;
}
