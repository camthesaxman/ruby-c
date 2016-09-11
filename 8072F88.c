int cur_mapheader_run_tileset2_func()
{
  int v0; // r0@1
  int v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  word_30006C6 = 0;
  word_30006C8 = 0;
  dword_30006D0 = 0;
  v0 = *(_DWORD *)(v202E828 + 20);
  if ( v0 )
  {
    v1 = *(_DWORD *)(v0 + 20);
    if ( v1 )
      call_via_r0(v1);
  }
  return v3;
}
