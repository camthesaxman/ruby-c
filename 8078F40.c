int __fastcall sub_8078F40(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  obj_id_set_rotscale(a1, 0x100u, 256, 0);
  v2 = &gSprites[68 * v1];
  v2[1] = (v2[1] & 0xFC | 1) & 0xF3;
  v2[44] &= 0x7Fu;
  CalcCenterToCornerVec(
    (int)v2,
    (unsigned int)(unsigned __int8)v2[1] >> 6,
    (unsigned int)(unsigned __int8)v2[3] >> 6,
    v2[1] & 3);
  return v4;
}
