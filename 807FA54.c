int sub_807FA54()
{
  unsigned int v0; // r4@2
  int v1; // r0@3
  int v3; // [sp+8h] [bp-4h]@0

  if ( v202FEE8 )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 0x202F8D8);
      if ( v1 )
        DestroySprite(v1);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    FreeSpriteTilesByTag(0x1202u);
    v202FEE8 = 0;
  }
  return v3;
}
