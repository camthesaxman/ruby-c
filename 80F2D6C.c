int __fastcall sub_80F2D6C(unsigned __int8 a1)
{
  unsigned int v1; // r4@2
  unsigned int v2; // r4@5
  int v4; // [sp+8h] [bp-4h]@0

  if ( a1 > 4u )
  {
    FreeSpriteTilesByTag(2u);
    v2 = 0;
    do
    {
      DestroySprite(*(_DWORD *)(4 * v2 + 0x2003B90));
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 1 );
  }
  else
  {
    FreeSpriteTilesByTag(1u);
    v1 = 0;
    do
    {
      DestroySprite(*(_DWORD *)(4 * v1 + 0x2003B88));
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 1 );
  }
  return v4;
}
