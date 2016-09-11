int sub_80A30E0()
{
  int v1; // [sp+0h] [bp-18h]@1
  int v2; // [sp+14h] [bp-4h]@1

  MenuLoadTextWindowGraphics_OverrideFrameType(0);
  sub_80FBFB4(&v1, v202E83C, 0);
  MenuDrawTextWindow(0, 0);
  sub_8072BD8(&v1, 1, 1u, 0x60u);
  return v2;
}
