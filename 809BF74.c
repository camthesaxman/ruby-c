int sub_809BF74()
{
  char v0; // r2@1
  unsigned __int8 v1; // r0@13
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  if ( !v20384E6 )
    v0 = 1;
  v20011F6 = v0;
  if ( !v20384E6 )
  {
    if ( v20384E4 == 1 )
    {
      if ( v20384E5 <= 5 )
      {
        sub_809C04C(&dword_3004360[25 * v20384E5], 0);
        return v3;
      }
    }
    else
    {
      if ( v20384E4 <= 1 )
      {
        if ( !v20384E4 )
        {
          v1 = get_preferred_box();
          sub_809C04C(2400 * v1 + 80 * v20384E5 + 33751204, 1);
        }
        return v3;
      }
      if ( v20384E4 > 3 )
        return v3;
    }
    sub_809C04C(0, 2);
  }
  return v3;
}
