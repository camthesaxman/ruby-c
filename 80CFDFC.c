int __fastcall sub_80CFDFC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 0);
  *(_WORD *)(v1 + 46) = (16 * IndexOfSpritePaletteTag(0x27C2u) & 0xFFF) + 256;
  *(_DWORD *)(v1 + 28) = sub_80CFE2C;
  return v3;
}
