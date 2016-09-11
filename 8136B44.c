int sub_8136B44()
{
  signed int v0; // r1@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( v0 == 1 )
  {
    if ( !(v202F38F & 0x80) )
      *(_BYTE *)(v2039304 + 80) = 2;
  }
  else
  {
    if ( v0 <= 1 )
    {
      if ( *(_BYTE *)(v2039304 + 80) )
        return v2;
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      goto _08136B9C;
    }
    if ( v0 == 2 )
    {
      sub_80F5BDC();
_08136B9C:
      ++*(_BYTE *)(v2039304 + 80);
      return v2;
    }
    if ( v0 == 3 )
      SetMainCallback2(*(_DWORD *)(v2039304 + 4));
  }
  return v2;
}
