int ContestEffect_31()
{
  signed int v0; // r1@1
  signed int v1; // r3@1
  int v2; // r2@1
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) > (unsigned int)*(_BYTE *)(v0 + 33657552) )
      v1 += *(_WORD *)(v2 + 33657442);
    v2 += 28;
    ++v0;
  }
  while ( v0 <= 3 );
  if ( v1 < 0 )
    v1 = 0;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) && v1 )
  {
    *(_WORD *)(28 * v20192E1 + 0x2019262) += v1 / 2;
    sub_80B13EC(v20192E1, 17);
  }
  else
  {
    sub_80B13EC(v20192E1, 18);
  }
  *(_WORD *)(28 * v20192E1 + 0x2019262) = sub_80B9224(*(_WORD *)(28 * v20192E1 + 0x2019262));
  return v4;
}
