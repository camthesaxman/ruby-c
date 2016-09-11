int sub_807E974()
{
  unsigned int i; // r4@1
  int v1; // r0@2
  int v3; // [sp+10h] [bp-4h]@0

  for ( i = 0; i < v202FEC2; i = (i + 1) & 0xFFFF )
  {
    v1 = *(_DWORD *)(4 * i + 0x202F7E8);
    if ( v1 )
      DestroySprite(v1);
  }
  v202FEC2 = 0;
  FreeSpriteTilesByTag(0x1206u);
  return v3;
}
