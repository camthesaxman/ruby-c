int sub_8093E28()
{
  void *v0; // r3@1
  signed int v1; // r4@1
  unsigned int v2; // r5@1
  int v4; // [sp+10h] [bp-4h]@0

  sub_8093EA0();
  LoadPalette((int)&gUnknown_083B5F6C, 224, 32);
  v0 = &gMenuTrainerCard_Gfx;
  v1 = 100663296;
  v2 = 5248;
  do
  {
    v40000D4 = v0;
    v40000D8 = v1;
    v40000DC = -2147481600;
    v0 = (char *)v0 + 4096;
    v1 += 4096;
    v2 -= 4096;
  }
  while ( v2 > 0x1000 );
  v40000D4 = &gBadgesTiles;
  v40000D8 = 100668544;
  v40000DC = -2147483136;
  return v4;
}
