signed int sub_80715C0()
{
  signed int v0; // r0@1

  v0 = (unsigned __int8)sub_8071630();
  if ( v0 == 1 )
    goto _080715F4;
  if ( v0 > 1 )
  {
    if ( v0 != 2 )
    {
      if ( v0 != 3 )
        return 0;
_080715F4:
      MenuZeroFillScreen(v0);
      sub_8064E2C();
      script_env_2_disable();
      return 1;
    }
    MenuZeroFillScreen(2);
    sub_8071230();
    dword_3004AE8 = (int)sub_8071338;
  }
  return 0;
}
