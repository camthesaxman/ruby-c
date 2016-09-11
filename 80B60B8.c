int sub_80B60B8()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r0@1
  int result; // r0@2

  v0 = sub_80B61EC() << 24;
  v1 = v0 >> 24;
  v2 = v0 >> 24;
  v3 = (unsigned __int8)sub_80B6958();
  if ( v1 == 8 )
  {
    LOBYTE(result) = sub_80B61C8(v3);
    return (unsigned __int8)result;
  }
  if ( v1 == 6 )
  {
    sub_80B6FBC(v3);
  }
  else
  {
    if ( v2 != 7 )
    {
      LOBYTE(result) = call_via_r1(v2, *(&gUnknown_083CE240 + v3));
      return (unsigned __int8)result;
    }
    sub_80B7090(v3);
  }
  return 0;
}
