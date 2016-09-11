int __fastcall DoScroll_TextMode0(int a1, unsigned __int16 a2)
{
  int v2; // r6@1
  unsigned int v3; // r5@1
  int v4; // r4@1
  __int16 v6; // [sp+0h] [bp-1Ch]@1
  __int16 v7; // [sp+2h] [bp-1Ah]@1
  int v8; // [sp+18h] [bp-4h]@1

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 40)
     + 2 * (32 * ((unsigned int)*(_WORD *)(a1 + 20) >> 3) + ((unsigned int)*(_BYTE *)(a1 + 18) >> 3));
  v4 = ((*(_BYTE *)(a1 + 6) << 12) | GetBlankTileNum(a1)) & 0xFFFF;
  CpuSet(v3 + 128, v3, v2);
  CpuSet(v3 + 192, v3 + 64, v2);
  v6 = v4;
  CpuSet(&v6, v3 + 128, v2 | 0x1000000);
  v7 = v4;
  CpuSet(&v7, v3 + 192, v2 | 0x1000000);
  return v8;
}
