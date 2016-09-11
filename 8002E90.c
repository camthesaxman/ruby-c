int __fastcall sub_8002E90(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  *(_WORD *)(a1 + 22) = 2;
  *(_DWORD *)(a1 + 32) = a2;
  *(_WORD *)(a1 + 30) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 11) = -1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 13) = 0;
  return v3;
}
