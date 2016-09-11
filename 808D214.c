int __fastcall sub_808D214(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r1@2
  _BOOL4 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    *(_BYTE *)(v202FFB4 + 1580) = *(_WORD *)(v202FFB4 + 1578);
    v2 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1550) = *(_WORD *)(v202FFB4 + 1552);
    *(_WORD *)(v2 + 1554) = *(_WORD *)(v2 + 1556);
    v3 = sub_806912C();
    if ( !v3 )
      *(_WORD *)(v202FFB4 + 1554) = 0;
    *(_WORD *)(v202FFB4 + 1558) = *(_WORD *)(v202FFB4 + 1560);
    dword_3004B20[10 * v1] = (int)sub_808C608;
  }
  return v5;
}
