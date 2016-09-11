int __fastcall sub_8069638(int a1, __int16 a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r7@1
  unsigned __int16 v8; // r0@1
  int v9; // r0@1
  int v10; // r4@1
  int v11; // r5@1
  int v13; // [sp+14h] [bp-4h]@0

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = MapGridGetMetatileBehaviorAt(a2, a3);
  v9 = sub_80695E0(v4, v8);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    MapGridSetMetatileIdAt(v6 + *(_BYTE *)v9, v7 + *(_BYTE *)(v9 + 1), *(_WORD *)(v9 + 2));
    if ( v5 )
      CurrentMapDrawMetatileAt(v6 + *(_BYTE *)v10, v7 + *(_BYTE *)(v10 + 1));
    MapGridSetMetatileIdAt(v6 + *(_BYTE *)(v11 + 4), v7 + *(_BYTE *)(v11 + 5), *(_WORD *)(v11 + 6));
    if ( v5 )
      CurrentMapDrawMetatileAt(v6 + *(_BYTE *)(v11 + 4), v7 + *(_BYTE *)(v11 + 5));
  }
  return v13;
}
