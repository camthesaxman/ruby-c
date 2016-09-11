int __fastcall sub_80B79B8(unsigned int *a1, int a2)
{
  unsigned int *v2; // r2@1
  unsigned int v3; // r0@1
  unsigned int v4; // r1@1
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a1;
  v3 = *a1;
  v4 = v3 + a2;
  if ( v3 > v4 || (*v2 = v4, v4 > 0xF423F) )
    *v2 = 999999;
  return v6;
}
