int sub_810305C()
{
  unsigned __int8 v0; // r0@1
  signed int v1; // r3@1
  int v2; // r5@1

  v0 = sub_810250C(v2000004);
  v1 = v0;
  v2 = v0;
  if ( v2000004 & 0xC0 )
  {
    v2 = 0;
    v1 = 1;
  }
  return (unsigned __int8)call_via_r2(v2, v1, *(&gUnknown_083ECB64 + v2000012 - 1));
}
