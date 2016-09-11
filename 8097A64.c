int sub_8097A64()
{
  unsigned __int8 v0; // r0@9
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000004 == 1 )
  {
    v0 = sub_8096368();
    v20008B2 = v0;
    if ( v0 == 200 )
      return v2;
    sub_8098A5C(v0);
    sub_809635C();
    sub_8096310();
    if ( v20008B2 == 201 || v20008B2 == v20300A0 )
    {
      sub_809A860(1);
      sub_8096BE0((int)sub_8096C84);
      return v2;
    }
_08097B0A:
    ++v2000004;
    return v2;
  }
  if ( (signed int)v2000004 <= 1 )
  {
    if ( v2000004 )
      return v2;
    sub_8098898(5);
    sub_8096264(33563504, 7, 0xDACAu, 3);
    sub_809634C(v20300A0);
    goto _08097B0A;
  }
  if ( v2000004 == 2 )
  {
    sub_8099C70(v20008B2);
    goto _08097B0A;
  }
  if ( v2000004 == 3 && !(sub_8099D34() << 24) )
  {
    v20300A0 = v20008B2;
    sub_8096BE0((int)sub_8096C84);
  }
  return v2;
}
