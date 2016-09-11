int __fastcall sub_8073830(unsigned __int16 a1, unsigned __int8 a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  sub_8072E24(
    *(int *)((char *)&gTilesetAnimTable_EverGrande + ((((a1 - a2) << 16) & 0x70000u) >> 14)),
    gUnknown_0837C93C[a2],
    128);
  return v3;
}
