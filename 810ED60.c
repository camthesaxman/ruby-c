int __fastcall sub_810ED60(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@5
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 14) == 8 )
  {
    *(_WORD *)(a1 + 14) = 0;
    if ( *(_WORD *)(a1 + 16) )
    {
      MapGridSetMetatileIdAt(7, 7, 3688);
      MapGridSetMetatileIdAt(8, 7, 3689);
      MapGridSetMetatileIdAt(9, 7, 3689);
      MapGridSetMetatileIdAt(10, 7, 3690);
      MapGridSetMetatileIdAt(7, 8, 3696);
      MapGridSetMetatileIdAt(8, 8, 3697);
      MapGridSetMetatileIdAt(9, 8, 3697);
      MapGridSetMetatileIdAt(10, 8, 3698);
      MapGridSetMetatileIdAt(7, 9, 3704);
      MapGridSetMetatileIdAt(8, 9, 3705);
      MapGridSetMetatileIdAt(9, 9, 3705);
      MapGridSetMetatileIdAt(10, 9, 3706);
    }
    else
    {
      MapGridSetMetatileIdAt(7, 7, 3691);
      MapGridSetMetatileIdAt(8, 7, 3692);
      MapGridSetMetatileIdAt(9, 7, 3692);
      MapGridSetMetatileIdAt(10, 7, 3693);
      MapGridSetMetatileIdAt(7, 8, 3699);
      MapGridSetMetatileIdAt(8, 8, 3700);
      MapGridSetMetatileIdAt(9, 8, 3700);
      MapGridSetMetatileIdAt(10, 8, 3701);
      MapGridSetMetatileIdAt(7, 9, 3707);
      MapGridSetMetatileIdAt(8, 9, 3708);
      MapGridSetMetatileIdAt(9, 9, 3708);
      MapGridSetMetatileIdAt(10, 9, 3709);
    }
    DrawWholeMapView();
    *(_WORD *)(v1 + 16) ^= 1u;
    v2 = *(_WORD *)(v1 + 12) + 1;
    *(_WORD *)(v1 + 12) = v2;
    if ( v2 == 8 )
      DestroyTask(*(_BYTE *)(v1 + 10));
  }
  ++*(_WORD *)(v1 + 14);
  return v4;
}
