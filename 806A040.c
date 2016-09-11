int __fastcall sub_806A040(__int16 a1, __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int16 v5; // r2@1
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = MapGridGetMetatileIdAt(a1, a2);
  v5 = 567;
  if ( v4 == 559 )
    v5 = 518;
  MapGridSetMetatileIdAt(v2, v3, v5);
  CurrentMapDrawMetatileAt(v2, v3);
  return v7;
}
