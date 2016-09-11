int sub_807DEF4()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v202FEB4 == 1 )
  {
    sub_807DBA4(0xCu, 8u, 1);
_0807DF42:
    ++v202FEB4;
    return v1;
  }
  if ( (signed int)v202FEB4 <= 1 )
  {
    if ( v202FEB4 )
      return v1;
    sub_807DFD4();
    goto _0807DF42;
  }
  if ( v202FEB4 == 2 && sub_807DBE8() << 24 )
  {
    v202FEBA = 1;
    goto _0807DF42;
  }
  return v1;
}
