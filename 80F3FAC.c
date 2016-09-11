int sub_80F3FAC()
{
  unsigned int v0; // r5@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 0x2008800) )
    {
      SeekSpriteAnim(*(_DWORD *)(4 * v0 + 0x2008800), 0);
      *(_BYTE *)(*(_DWORD *)(4 * v0 + 0x2008800) + 62) &= 0xFBu;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 9 );
  return v2;
}
