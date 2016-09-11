int sub_80F4394()
{
  unsigned int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_DWORD *)(4 * v0 + 0x200CED4);
    if ( v1 )
      DestroySprite(v1);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  FreeSpriteTilesByTag(0x1Au);
  FreeSpritePaletteByTag(0x12u);
  return v3;
}
