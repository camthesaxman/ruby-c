int sub_80A9FE4()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@1
  int v3; // [sp+0h] [bp-24h]@1
  int v4; // [sp+8h] [bp-1Ch]@2
  int v5; // [sp+20h] [bp-4h]@3

  memcpy(&v3, &gUnknown_083C9228, 5);
  v0 = 100663296;
  v1 = 98304;
  do
  {
    v4 = 0;
    v40000D4 = &v4;
    v40000D8 = v0;
    v40000DC = -2063596544;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v4 = 0;
  v40000D4 = &v4;
  v40000D8 = v0;
  v40000DC = (v1 >> 2) | 0x85000000;
  sub_80034D4(100663296, (int)&v3);
  LoadFontDefaultPalette((int)&gWindowConfig_81E6C3C);
  return v5;
}
