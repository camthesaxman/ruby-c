int __fastcall sub_8073014(int a1)
{
  unsigned int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = ((a1 << 16) & 0xF0000u) >> 16;
  if ( !v2 )
    sub_8073070(v1 >> 20);
  if ( v2 == 1 )
    sub_8073098(v1 >> 20);
  if ( v2 == 2 )
    sub_80730C0(v1 >> 20);
  if ( v2 == 3 )
    sub_80730E8(v1 >> 20);
  if ( v2 == 4 )
    sub_807361C(v1 >> 20);
  return v4;
}
