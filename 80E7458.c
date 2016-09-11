int sub_80E7458()
{
  _BYTE *v0; // r0@10
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2001024 )
  {
    if ( v2001024 == 1 && sub_80E9E54() << 24 )
    {
      if ( (int (*)())v20011C4 == sub_80E6FC8 )
      {
        sub_80E9D7C();
        v20011B5 += v20011C0;
        sub_80E7A98();
        v0 = (_BYTE *)33558678;
      }
      else
      {
        v200AA29 += v20011C0;
        sub_80E7D30();
        v0 = (_BYTE *)33558969;
      }
      *v0 = 1;
      v20011BE = 2;
      sub_80E682C(v20011C4);
    }
  }
  else
  {
    if ( (int (*)())v20011C4 == sub_80E6FC8 )
      sub_80E9D7C();
    else
      sub_80E9D00();
    sub_80E9E08(v20011BE);
    ++v2001024;
  }
  return v2;
}
