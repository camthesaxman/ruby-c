int __fastcall MapGridGetMetatileBehaviorAt(int a1, int a2)
{
  unsigned __int16 v2; // r0@1

  v2 = MapGridGetMetatileIdAt(a1, a2);
  return (unsigned __int8)GetBehaviorByMetatileId(v2);
}
