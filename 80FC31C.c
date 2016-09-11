int sub_80FC31C()
{
  signed int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-10h]@1
  unsigned int v4; // [sp+4h] [bp-Ch]@1
  int v5; // [sp+Ch] [bp-4h]@1

  LZ77UnCompWram(&gUnknown_083E784C, 33556616);
  v3 = 33556616;
  v4 = (v4 & 0xFFFF0000 | 0x1C0) & 0xFFFF | 0x20000;
  LoadSpriteSheet((int)&v3);
  v0 = LoadSpritePalette((int)&gUnknown_083E79CC);
  v1 = sub_80FC374(v0);
  sub_80FC484(v1);
  return v5;
}
