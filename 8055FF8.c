int __fastcall mapheader_copy_mapdata_with_padding(_DWORD *a1)
{
  _DWORD *v1; // r6@1
  int v2; // r5@1
  int v4; // [sp+0h] [bp-14h]@1
  int v5; // [sp+10h] [bp-4h]@3

  v1 = a1;
  v2 = *a1;
  v4 = 67044351;
  CpuFastSet(&v4, 33724456, 16782336);
  dword_3004878 = 33724456;
  dword_3004870 = *(_DWORD *)v2 + 15;
  dword_3004874 = *(_DWORD *)(v2 + 4) + 14;
  if ( dword_3004870 * dword_3004874 <= 10240 )
  {
    map_copy_with_padding(*(_DWORD *)(v2 + 12), *(_WORD *)v2, *(_WORD *)(v2 + 4));
    sub_80560AC(v1);
  }
  return v5;
}
