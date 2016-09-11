int __fastcall DoScroll_TextMode1(int a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  unsigned int v5; // r7@1
  int v6; // r5@1
  int v7; // r4@1
  __int16 v9; // [sp+0h] [bp-20h]@1
  __int16 v10; // [sp+2h] [bp-1Eh]@1
  int v11; // [sp+1Ch] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  v4 = GetCursorTilemapPointer(a1);
  v5 = v4;
  v6 = v4 - 64;
  v7 = ((*(_BYTE *)(v2 + 6) << 12) | GetBlankTileNum(v2)) & 0xFFFF;
  CpuSet(v5 + 64, v6, v3);
  CpuSet(v5 + 128, v5, v3);
  v9 = v7;
  CpuSet(&v9, v5 + 64, v3 | 0x1000000);
  v10 = v7;
  CpuSet(&v10, v5 + 128, v3 | 0x1000000);
  return v11;
}
