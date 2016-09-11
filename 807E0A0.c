int sub_807E0A0()
{
  unsigned int v0; // r4@2
  int v1; // r0@3
  int v3; // [sp+8h] [bp-4h]@0

  if ( v202FEC6 )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 0x202F9DC);
      if ( v1 )
        DestroySprite(v1);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 2 );
    FreeSpriteTilesByTag(0x1200u);
    v202FEC6 = 0;
  }
  return v3;
}
