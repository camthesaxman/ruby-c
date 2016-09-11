int sub_8097E70()
{
  signed int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+14h] [bp-4h]@0

  LZ77UnCompVram(&gPSSMenuHeader_Gfx, 100683776);
  LZ77UnCompWram(&gPSSMenuHeader_Tilemap, 33789792);
  sub_809D034(100694016, 0, 0, 33789792);
  LoadPalette((int)&gPSSMenu1_Pal, 16, 32);
  LoadPalette((int)&gPSSMenu2_Pal, 0, 32);
  LoadPalette((int)&gUnknown_083B6D74, 176, 32);
  LoadPalette((int)&gUnknown_083B6D94, 192, 32);
  LoadPalette((int)&unk_81E6694, 241, 2);
  LoadPalette((int)&unk_81E6694, 242, 2);
  LoadPalette((int)&unk_81E669C, 243, 2);
  LoadPalette((int)&unk_81E66AA, 244, 4);
  LoadPalette((int)&unk_81E66A6, 246, 4);
  LoadPalette((int)&unk_81E6696, 255, 2);
  v0 = LoadSpritePalette((int)"”k;\bÍÚ");
  v1 = sub_80980D4(v0);
  v2 = sub_8097F58(v1);
  v3 = sub_8097FB8(v2);
  sub_809801C(v3);
  return v5;
}
