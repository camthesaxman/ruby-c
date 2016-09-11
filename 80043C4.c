int __fastcall ClearWindowTextLines_TextMode2(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r4@1
  int v8; // r4@1
  int v10; // [sp+0h] [bp-24h]@1
  int v11; // [sp+4h] [bp-20h]@1
  int v12; // [sp+8h] [bp-1Ch]@1
  int v13; // [sp+Ch] [bp-18h]@1
  int v14; // [sp+20h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  v4 = *(_DWORD *)(a1 + 36) + (32 * GetCursorTileNum(a1, 0, 0) & 0x1FFFFF);
  v10 = dword_30003A0;
  v5 = 8 * v3 | 0x1000000;
  CpuFastSet(&v10, v4, v5);
  v6 = v4 + 32 * *(_BYTE *)(v2 + 9);
  v11 = dword_30003A0;
  CpuFastSet(&v11, v6, v5);
  v7 = v6 + 32 * *(_BYTE *)(v2 + 9);
  v12 = dword_30003A0;
  CpuFastSet(&v12, v7, v5);
  v8 = v7 + 32 * *(_BYTE *)(v2 + 9);
  v13 = dword_30003A0;
  CpuFastSet(&v13, v8, v5);
  return v14;
}
