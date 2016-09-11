signed int sub_807FFC8()
{
  int v0; // r0@1

  v0 = sub_8080064();
  sub_808002C(v0);
  if ( v202FEB6 != 1 )
  {
    if ( (signed int)v202FEB6 > 1 )
    {
      if ( v202FEB6 != 2 )
        return 0;
      sub_80800E4();
    }
    else
    {
      if ( v202FEB6 )
        return 0;
      sub_807DBA4(0, 0x10u, 0);
    }
    goto _08080016;
  }
  if ( sub_807DBE8() << 24 )
_08080016:
    ++v202FEB6;
  return 1;
}
