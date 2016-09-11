int sub_807F7A4()
{
  unsigned int v0; // r4@2
  int v1; // r0@3
  int v3; // [sp+8h] [bp-4h]@0

  if ( v202FEE3 )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 0x202F888);
      if ( v1 )
        DestroySprite(v1);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    FreeSpriteTilesByTag(0x1201u);
    v202FEE3 = 0;
  }
  return v3;
}
