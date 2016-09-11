int ContestEffect_09()
{
  int v0; // r2@1
  _BYTE *v1; // r4@1
  int v2; // r3@2
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = (_BYTE *)(v20192E1 + 33657552);
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v2 = 0;
    do
    {
      if ( *v1 > (unsigned int)*(_BYTE *)(v0 + 33657552) )
        *(_BYTE *)(v2++ + 33657560) = v0;
      ++v0;
    }
    while ( v0 <= 3 );
    *(_BYTE *)(v2 + 33657560) = -1;
    v0 = sub_80B9120() & 0xFF;
  }
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  sub_80B13EC(v20192E1, 48);
  return v4;
}
