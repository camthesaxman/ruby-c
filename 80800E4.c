int sub_80800E4()
{
  unsigned int v0; // r4@2
  int v1; // r0@3
  unsigned int v2; // r4@8
  int v3; // r0@9
  int v5; // [sp+8h] [bp-4h]@0

  if ( v202FEFE )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 0x202F978);
      if ( v1 )
        DestroySprite(v1);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    v202FEFE = 0;
    FreeSpriteTilesByTag(0x1204u);
  }
  if ( v202FEFF )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(4 * v2 + 0x202F9C8);
      if ( v3 )
        DestroySprite(v3);
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 4 );
    v202FEFF = 0;
  }
  return v5;
}
