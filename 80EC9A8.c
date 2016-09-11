int sub_80EC9A8()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2000304 )
  {
    if ( v2000304 == 1 && !(sub_80EEA0C() << 24) )
    {
      sub_80EBDBC((int)sub_80EC86C);
      sub_80EF428(1, v2006DAD);
    }
  }
  else
  {
    sub_80F2D04(5);
    sub_80EE9C0(1, v2006DF0, 12);
    ++v2000304;
  }
  return v1;
}
