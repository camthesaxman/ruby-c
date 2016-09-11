int __fastcall sub_80BC7D8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  MenuDrawTextWindow(0x11u, 0);
  InitMenu(0, 18, 2, v2[6] + 1, v2[2], 11);
  sub_80BC6B0(v1);
  return v4;
}
