int __fastcall FreeSpriteTiles(int a1)
{
  _WORD *v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD **)(a1 + 20);
  if ( *v1 != 0xFFFF )
    FreeSpriteTilesByTag(*v1);
  return v3;
}
