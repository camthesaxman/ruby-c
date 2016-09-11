int sub_8117434()
{
  int v0; // r1@1
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r1@1
  int v5; // [sp+Ch] [bp-4h]@0

  v4000020 = v201902C;
  v4000022 = v201902E;
  v4000024 = v2019030;
  v4000026 = v2019032;
  v0 = gSpriteCoordOffsetY + 80;
  v1 = gSpriteCoordOffsetX + 116;
  v2 = 29696 - v201902E * v0 - v201902C * v1;
  v3 = 21504 - v2019032 * v0 - v2019030 * v1;
  v4000028 = v2;
  v400002A = (v2 & 0xFFF0000u) >> 16;
  v400002C = v3;
  v400002E = (v3 & 0xFFF0000u) >> 16;
  return v5;
}
