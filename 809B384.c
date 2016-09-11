int sub_809B384()
{
  unsigned __int8 v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  if ( !v20384E4 )
  {
    v0 = get_preferred_box();
    sub_809B44C(v0, v20384E5);
    sub_8099584(1, v20384E5);
    goto _0809B3CC;
  }
  if ( v20384E4 == 1 )
  {
    sub_809B44C(14, v20384E5);
    sub_8099584(0, v20384E5);
_0809B3CC:
    v20384E6 = 1;
  }
  return v2;
}
