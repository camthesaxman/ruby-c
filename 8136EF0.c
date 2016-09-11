int sub_8136EF0()
{
  unsigned int *v0; // r5@1
  int v1; // r2@1
  int v2; // r2@1
  unsigned int v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v0 = &dword_3004360[25 * (*(_BYTE *)(4 * v20087DC + 0x200893E) & 0x1F)];
  sub_8136E10((int)v0, v2039304 + 87, 0);
  sub_8136E40(*(_DWORD *)(v2039304 + 8), (int)v0, v1);
  sub_8136E10((int)v0, v2039304 + 92, v2);
  v3 = 0;
  do
  {
    *(_BYTE *)(v2039304 + 97 + v3) = *(_BYTE *)(v2039304 + 92 + v3) - *(_BYTE *)(v2039304 + 87 + v3);
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 4 );
  return v5;
}
