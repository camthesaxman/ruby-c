signed int sub_8068F18()
{
  int v0; // r5@1
  __int16 v2; // [sp+0h] [bp-10h]@1
  char v3; // [sp+2h] [bp-Eh]@1

  PlayerGetDestCoords(&v2, &v3);
  v0 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v2, *(signed __int16 *)&v3);
  if ( v202E83F != 5 || sub_805750C(v0) << 24 )
  {
    if ( (unsigned __int8)sub_80574EC(v0) == 1 && (unsigned __int8)sub_80538D0(v2 - 7, v3 - 7) == 1 )
      return 2;
  }
  else if ( (unsigned __int8)sub_80538B0(v2 - 7, v3 - 7) == 1 )
  {
    return 1;
  }
  return 0;
}
