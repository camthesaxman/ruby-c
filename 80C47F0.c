int sub_80C47F0()
{
  unsigned int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  if ( v2038690 )
  {
    do
      v0 = (v0 + 1) & 0xFF;
    while ( v0 <= 3 && *(_BYTE *)(v0 + 33785488) );
  }
  if ( v203869A & 1 )
    sub_80C4674(&gStringVar3, &byte_3002978[28 * v0]);
  else
    sub_80C4674(&gStringVar3, (_BYTE *)((v0 << 6) + 33785213));
  return v2;
}
