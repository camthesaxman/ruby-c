int sub_8111288()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v200000C )
  {
    if ( v200000C == 1 && !(UpdatePaletteFade() << 24) )
      sub_8110814((int)sub_81112BC);
  }
  else
  {
    v200000C = 1;
  }
  return v1;
}
