signed int __fastcall sub_80B90C0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int v2; // r2@1
  char v3; // r1@2
  char v4; // r0@3

  v1 = a1;
  *(_BYTE *)(a1 + 0x20192DD) = 1;
  v2 = 28 * a1 + 33657440;
  if ( *(_BYTE *)(28 * a1 + 0x2019270) & 2 )
  {
    v3 = 45;
_080B9116:
    sub_80B13EC(a1, v3);
    return 0;
  }
  v4 = *(_BYTE *)(28 * a1 + 0x2019272);
  if ( *(_BYTE *)(v2 + 18) )
  {
    *(_BYTE *)(v2 + 18) = v4 - 1;
    a1 = v1;
    v3 = 44;
    goto _080B9116;
  }
  if ( !(*(_BYTE *)(v2 + 11) & 0x80) && !(*(_BYTE *)(v2 + 12) & 6) )
    return 1;
  return 0;
}
