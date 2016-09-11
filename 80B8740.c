int ContestEffect_32()
{
  __int16 v0; // r6@1
  signed int v1; // r2@2
  int v2; // r3@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( !*(_BYTE *)(v20192E1 + 0x20192D0) )
    goto LABEL_13;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) - 1 == *(_BYTE *)(v1 + 33657552) )
      v0 = *(_WORD *)(v2 + 33657442);
    v2 += 28;
    ++v1;
  }
  while ( v1 <= 3 );
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) && v0 > 0 )
  {
    *(_WORD *)(28 * v20192E1 + 0x2019262) += v0;
    sub_80B13EC(v20192E1, 19);
  }
  else
  {
LABEL_13:
    sub_80B13EC(v20192E1, 20);
  }
  return v4;
}
