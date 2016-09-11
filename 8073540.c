int __fastcall sub_8073540(int a1)
{
  unsigned int v1; // r4@1
  unsigned int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = ((a1 << 16) & 0x70000u) >> 16;
  if ( !v2 )
    sub_8073830(v1 >> 19, 0);
  if ( v2 == 1 )
    sub_8073830(v1 >> 19, 1);
  if ( v2 == 2 )
    sub_8073830(v1 >> 19, 2);
  if ( v2 == 3 )
    sub_8073830(v1 >> 19, 3);
  if ( v2 == 4 )
    sub_8073830(v1 >> 19, 4);
  if ( v2 == 5 )
    sub_8073830(v1 >> 19, 5);
  if ( v2 == 6 )
    sub_8073830(v1 >> 19, 6);
  if ( v2 == 7 )
    sub_8073830(v1 >> 19, 7);
  return v4;
}
