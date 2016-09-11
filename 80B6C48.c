int __fastcall sub_80B6C48(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r6@1
  unsigned __int8 v4; // r5@1
  int v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v3 = a2;
  v4 = a1;
  v5 = 2 * a1;
  *(_BYTE *)(a3 + 5) = *(_BYTE *)(a3 + 5) & 0xF | 16 * IndexOfSpritePaletteTag(gUnknown_083CE2C4[a1]);
  *(_WORD *)(v3 + 64) = GetSpriteTileStartByTag(*(_WORD *)((char *)&gUnknown_083CE2CA + v5));
  *(_BYTE *)(v3 + 66) = *(_BYTE *)(v3 + 66) & 0xC0 | v4 & 0x3F;
  return v7;
}
