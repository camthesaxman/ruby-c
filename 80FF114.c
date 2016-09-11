int __fastcall sub_80FF114(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  DrawWholeMapView();
  warp1_set(v2025738, v2025739, -1, BYTE2(dword_3004B20[10 * v1 + 3]), dword_3004B20[10 * v1 + 4]);
  warp_in();
  return v3;
}
