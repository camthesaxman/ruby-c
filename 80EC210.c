int sub_80EC210()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2000304 )
  {
    if ( v2000304 == 1 && !(sub_80EEA0C() << 24) )
      sub_80EBDBC((int)sub_80EC268);
  }
  else
  {
    sub_80F2D04(1);
    sub_80EE9C0(0, v2006DDC, 0);
    ++v2000304;
  }
  return v1;
}
