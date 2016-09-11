unsigned int __fastcall MapGridGetMetatileLayerTypeAt(int a1, int a2)
{
  unsigned __int16 v2; // r0@1

  v2 = MapGridGetMetatileIdAt(a1, a2);
  return (GetBehaviorByMetatileId(v2) & 0xF000u) >> 12;
}
