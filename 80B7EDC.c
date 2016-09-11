int ContestEffect_08()
{
  int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) - 1 != v20192D0 )
    {
      do
        ++v0;
      while ( v0 <= 3 && *(_BYTE *)(v20192E1 + 0x20192D0) - 1 != *(_BYTE *)(v0 + 33657552) );
    }
    v20192D8 = v0;
    v20192D9 = -1;
    v0 = sub_80B9120() & 0xFF;
  }
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  sub_80B13EC(v20192E1, 48);
  return v2;
}
