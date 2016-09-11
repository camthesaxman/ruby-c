int __fastcall sub_810E6A4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@5
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 14) == 6 )
  {
    *(_WORD *)(a1 + 14) = 0;
    if ( *(_WORD *)(a1 + 16) )
    {
      MapGridSetMetatileIdAt(18, 8, 3741);
      MapGridSetMetatileIdAt(18, 9, 3749);
    }
    else
    {
      MapGridSetMetatileIdAt(18, 8, 3672);
      MapGridSetMetatileIdAt(18, 9, 3680);
    }
    DrawWholeMapView();
    *(_WORD *)(v1 + 16) ^= 1u;
    v2 = *(_WORD *)(v1 + 12) + 1;
    *(_WORD *)(v1 + 12) = v2;
    if ( v2 == 5 )
      DestroyTask(*(_BYTE *)(v1 + 10));
  }
  ++*(_WORD *)(v1 + 14);
  return v4;
}
