int __fastcall sub_808CB8C(unsigned __int8 a1)
{
  int *v1; // r5@1
  int *v2; // r0@1
  int v3; // r2@2
  int (__fastcall *v4)(unsigned __int8); // r0@3
  int v5; // r1@4
  _BOOL4 v6; // r0@4
  int v8; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &dword_3004B20[10 * *((_WORD *)v1 + 4)];
  if ( !*((_BYTE *)v2 + 4) )
  {
    v3 = v202FFB4;
    if ( *(_BYTE *)(v202FFB4 + 1615) )
    {
      *(_WORD *)(v202FFB4 + 1550) = *((_BYTE *)v2 + 4);
      *(_BYTE *)(v3 + 1580) = 64;
      v4 = (int (__fastcall *)(unsigned __int8))sub_808CCC4;
    }
    else
    {
      *(_BYTE *)(v202FFB4 + 1580) = *(_WORD *)(v202FFB4 + 1578);
      v5 = v202FFB4;
      *(_WORD *)(v202FFB4 + 1550) = *(_WORD *)(v202FFB4 + 1552);
      *(_WORD *)(v5 + 1554) = *(_WORD *)(v5 + 1556);
      v6 = sub_806912C();
      if ( !v6 )
        *(_WORD *)(v202FFB4 + 1554) = 0;
      *(_WORD *)(v202FFB4 + 1558) = *(_WORD *)(v202FFB4 + 1560);
      v4 = sub_808C608;
    }
    *v1 = (int)v4;
  }
  return v8;
}
