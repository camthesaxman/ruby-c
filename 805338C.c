int sub_805338C()
{
  int v0; // r0@1
  int v1; // r2@1
  int v2; // r3@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r5@1
  int v7; // [sp+8h] [bp-4h]@0

  v0 = get_mapheader_by_bank_and_number(v2025738 & 0xFFFF, v2025739 & 0xFFFF);
  v1 = *(_DWORD *)v0;
  v2 = *(_DWORD *)(v0 + 4);
  v3 = *(_DWORD *)(v0 + 8);
  v0 += 12;
  v202E828 = v1;
  v202E82C = v2;
  v202E830 = v3;
  v4 = *(_DWORD *)(v0 + 4);
  v5 = *(_DWORD *)(v0 + 8);
  v202E834 = *(_DWORD *)v0;
  v202E838 = v4;
  v202E83C = v5;
  v202E840 = *(_DWORD *)(v0 + 12);
  v202E828 = get_mapdata_header();
  return v7;
}
