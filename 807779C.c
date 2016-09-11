int sub_807779C()
{
  int v0; // r2@1
  _BYTE *v1; // r0@2
  int v2; // r4@4
  int v4; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(v202F7A4 + 1);
  v202F7A4 += 2;
  if ( v0 )
    v1 = (_BYTE *)33748937;
  else
    v1 = (_BYTE *)33748936;
  v2 = (unsigned __int8)battle_get_per_side_status(*v1);
  if ( !(sub_8076BE0() << 24) && (!v2 || v2 == 3) )
  {
    v400000A = v400000A & 0xFC | 1;
    v400000C = v400000C & 0xFC | 2;
  }
  return v4;
}
