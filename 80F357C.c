int sub_80F357C()
{
  unsigned int v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 0x20087E4) )
    {
      DestroySprite(*(_DWORD *)(4 * v0 + 0x20087E4));
      *(_DWORD *)(4 * v0 + 0x20087E4) = 0;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 6 );
  return v2;
}
