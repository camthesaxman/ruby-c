int __fastcall sub_8127DD0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) &= 0xFBu;
  *(_BYTE *)(a1 + 44) &= 0xBFu;
  MapGridSetMetatileIdAt(*(_WORD *)(a1 + 48), *(_WORD *)(v1 + 50), *(_WORD *)(v1 + 52));
  CurrentMapDrawMetatileAt(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50));
  LOBYTE(dword_30048A0[9 * v202E85D]) |= 4u;
  *(_WORD *)(v1 + 46) = 2;
  return v3;
}
