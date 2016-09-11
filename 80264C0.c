signed int sub_80264C0()
{
  unsigned int v0; // r0@1
  _BYTE *v1; // r1@2
  int v2; // r0@2
  unsigned __int8 v3; // r0@3
  unsigned int v4; // r1@3

  v0 = *(_BYTE *)(88 * v2024C08 + 0x2024AAA);
  if ( *(_BYTE *)(88 * v2024C07 + 0x2024AAA) < v0 )
  {
    v3 = Random(v0);
    v4 = *(_BYTE *)(88 * v2024C08 + 0x2024AAA);
    if ( ((signed int)(v3 * (*(_BYTE *)(88 * v2024C07 + 0x2024AAA) + v4)) >> 8) + 1 <= v4 >> 2 )
    {
      v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
      return 0;
    }
    v1 = (_BYTE *)(v2024C08 + 33644644);
    v2 = 2 * v2024C08;
  }
  else
  {
    v1 = (_BYTE *)(v2024C08 + 33644644);
    v2 = 2 * v2024C08;
  }
  *v1 = *(_WORD *)(v2 + 33704554);
  v2024C10 = &gUnknown_081D90FC;
  return 1;
}
