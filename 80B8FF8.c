int ContestEffect_47()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !(v2019329 & 1) )
  {
    v2019329 = (v2019329 | 1) & 0xF1 | 2 * (v20192E1 & 7);
    sub_80B13EC(v20192E1, 61);
  }
  return v1;
}
