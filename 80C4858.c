int sub_80C4858()
{
  unsigned int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = 0;
  if ( v2038690 )
  {
    do
      v0 = (v0 + 1) & 0xFF;
    while ( v0 <= 3 && *(_BYTE *)(v0 + 33785488) );
  }
  sub_80C4698(&gStringVar1, v0);
  return v2;
}
