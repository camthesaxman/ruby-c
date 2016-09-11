int __fastcall pal_patch_for_npc(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = FindFieldObjectPaletteIndexByTag(a1);
  LoadPalette(
    *(void **)((char *)&gUnknown_0837377C + (8 * v3 & 0x7FF)),
    (unsigned int)((v2 << 20) + 0x1000000) >> 16,
    32);
  return v5;
}
