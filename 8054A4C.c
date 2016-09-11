signed int __fastcall sub_8054A4C(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  signed int v2; // r0@1
  int v3; // r0@8
  int v4; // r0@8

  v1 = a1;
  v2 = *a1;
  if ( v2 == 1 )
  {
    sub_8054C2C();
_08054A88:
    ++*v1;
    return 0;
  }
  if ( v2 <= 1 )
  {
    if ( v2 )
      return 0;
    sub_8054BA8(0);
    v3 = sub_8054D4C(0);
    v4 = sub_8054E20(v3);
    sub_8054E34(v4);
    goto _08054A88;
  }
  if ( v2 == 2 )
  {
    sub_80543E8();
    goto _08054A88;
  }
  if ( v2 == 3 )
    return 1;
  return 0;
}
