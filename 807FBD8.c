int sub_807FBD8()
{
  int v1; // [sp+8h] [bp-4h]@0

  sub_807FC9C();
  if ( v202FEB4 == 1 )
  {
    sub_807DBA4(0xCu, 8u, 8);
_0807FC2A:
    ++v202FEB4;
    return v1;
  }
  if ( (signed int)v202FEB4 <= 1 )
  {
    if ( v202FEB4 )
      return v1;
    sub_807FD30();
    goto _0807FC2A;
  }
  if ( v202FEB4 == 2 && sub_807DBE8() << 24 )
  {
    v202FEBA = 1;
    goto _0807FC2A;
  }
  return v1;
}
