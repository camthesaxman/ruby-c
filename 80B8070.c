int ContestEffect_16()
{
  signed int v0; // r9@1
  int v1; // r7@1
  signed int v2; // r6@2
  _BYTE *v3; // r5@2
  int v5; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = v20192E1;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v2 = 0;
    v3 = (_BYTE *)33657461;
    do
    {
      if ( *(_BYTE *)(v1 + 33657552) > (unsigned int)*(_BYTE *)(v2 + 33657552)
        && *v3 & 0x10
        && sub_80B90C0((unsigned __int8)v2) << 24 )
      {
        *v3 = *v3 & 0xEF | 0x20;
        sub_80B13EC(v2, 8);
        v0 = 1;
      }
      v3 += 28;
      ++v2;
    }
    while ( v2 <= 3 );
  }
  sub_80B13EC(v20192E1, 7);
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  return v5;
}
