int __fastcall sub_80A3D24(int a1)
{
  char *v1; // r1@1
  unsigned int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &byte_3005D10[4 * a1 & 0x3FF];
  v2 = (unsigned __int8)v1[2];
  if ( v2 > 6 )
    LOBYTE(v2) = 7;
  v1[3] = v2;
  return v4;
}
