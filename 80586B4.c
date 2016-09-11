int __fastcall sub_80586B4(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = MapGridGetMetatileBehaviorAt(a1, a2);
  if ( sub_8056EAC(v4) << 24 )
    sub_80585AC((int)&gDoorAnimGraphicsTable, v2, v3);
  return v6;
}
