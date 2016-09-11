int sub_81033DC()
{
  signed int v0; // r3@1

  v0 = v2000007;
  if ( v2000004 & 0x40 )
  {
    v0 = 0;
    if ( !v2000007 )
      v0 = 1;
  }
  return (unsigned __int8)call_via_r1(v0, *(&gUnknown_083ECB7C + v2000012 - 1));
}
