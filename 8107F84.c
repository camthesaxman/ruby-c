int sub_8107F84()
{
  _WORD *v0; // r3@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = (_WORD *)(*(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24));
  if ( *v0 == 0xFFFF )
  {
_08107FD0:
    v2039238 = *(_BYTE *)(v2039238 + 5) | (*(_BYTE *)(v2039238 + 6) << 8) | (*(_BYTE *)(v2039238 + 7) << 16) | (*(_BYTE *)(v2039238 + 8) << 24);
  }
  else
  {
    while ( v2016808 != *v0 )
    {
      ++v0;
      if ( *v0 == 0xFFFF )
        goto _08107FD0;
    }
    v2039238 += 9;
  }
  return v2;
}
