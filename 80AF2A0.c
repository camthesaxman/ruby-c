int __fastcall sub_80AF2A0(int a1)
{
  int v2; // [sp+Ch] [bp-4h]@0

  FillWindowRect_DefaultPalette(
    (int)&unk_3004210,
    0,
    gUnknown_083CA318[2 * a1 & 0x1FF],
    gUnknown_083CA318[(2 * a1 & 0x1FF) + 1],
    gUnknown_083CA318[2 * a1 & 0x1FF] + 7,
    gUnknown_083CA318[(2 * a1 & 0x1FF) + 1] + 1);
  return v2;
}
