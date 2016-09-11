int __fastcall apply_map_tileset1_tileset2_palette(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( a1 )
  {
    apply_map_tileset1_palette(a1);
    apply_map_tileset2_palette(v1);
  }
  return v3;
}
