signed int sub_810F5BC()
{
  __int16 v0; // r1@4

  if ( !(FlagGet(0xC7u) << 24) && v2025738 == 1048 )
  {
    if ( FlagGet(0x3A3u) << 24 )
    {
      v0 = 4;
_0810F602:
      VarSet(0x409Au, v0);
      return 1;
    }
    if ( FlagGet(0x3A4u) << 24 )
    {
      v0 = 5;
      goto _0810F602;
    }
  }
  return 0;
}
