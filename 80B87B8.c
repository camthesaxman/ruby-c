int ContestEffect_33()
{
  int v0; // r3@1
  int v1; // r0@2
  signed __int16 v2; // r1@2
  int v4; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)(v20192E1 + 0x20192D0);
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v1 = 28 * v20192E1 + 33657440;
    v2 = 20 * v0;
  }
  else
  {
    v1 = 28 * v20192E1 + 33657440;
    v2 = 10;
  }
  *(_WORD *)(v1 + 2) = v2;
  if ( v0 )
  {
    if ( v0 == 1 )
    {
      sub_80B13EC(v20192E1, 22);
    }
    else if ( v0 == 2 )
    {
      sub_80B13EC(v20192E1, 23);
    }
    else
    {
      sub_80B13EC(v20192E1, 24);
    }
  }
  else
  {
    sub_80B13EC(v20192E1, 21);
  }
  return v4;
}
