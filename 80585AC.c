int __fastcall sub_80585AC(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned __int16 v6; // r0@1
  int v7; // r4@1
  int v8; // r0@2
  int v10; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = MapGridGetMetatileIdAt(a2, a3);
  v7 = door_find(v3, v6);
  if ( v7 )
  {
    v8 = door_frame_last(&gUnknown_0830F87C);
    sub_8058428(v7, v8, v4, v5);
  }
  return v10;
}
