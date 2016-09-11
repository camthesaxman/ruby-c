int sub_80A75E4()
{
  int v0; // r0@2
  char v1; // r5@2
  signed int v2; // r1@3
  int v4; // [sp+8h] [bp-4h]@0

  if ( v2038540 == 1 )
  {
    v0 = sub_80A7988();
    v1 = v0;
    if ( !v0 )
    {
      sub_80A47E8(v2038563, v2038541, v2038541, 1);
      ++v2038541;
      v2 = 7;
      if ( v2038542 )
        v2 = 5;
      if ( v2 < v2038541 )
      {
        v2038540 = v1;
        sub_80A78E8();
      }
    }
  }
  return v4;
}
