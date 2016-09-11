signed int sub_807DF54()
{
  if ( !v202FEB6 )
  {
    sub_807DBA4(0, 0x10u, 1);
_0807DF8E:
    ++v202FEB6;
    return 1;
  }
  if ( v202FEB6 != 1 )
    return 0;
  if ( sub_807DBE8() << 24 )
  {
    sub_807E0A0();
    goto _0807DF8E;
  }
  return 1;
}
