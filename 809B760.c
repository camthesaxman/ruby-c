int sub_809B760()
{
  int v0; // r0@2
  signed int v1; // r2@4
  int v3; // [sp+0h] [bp-4h]@0

  sub_8099920();
  if ( v20384E6 )
  {
    v0 = 0;
    v20384E6 = 0;
  }
  else
  {
    if ( v20384E4 == 1 )
      v1 = 14;
    else
      v1 = get_preferred_box() & 0xFF;
    v0 = sub_809B548(v1, v20384E5);
  }
  sub_809BF74(v0);
  return v3;
}
