int __fastcall sub_810437C(int a1)
{
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-4h]@0

  v200000A = 0;
  v2000014 = 0;
  v2000016 = 0;
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 12) = 30;
  *(_WORD *)(a1 + 16) = 1280;
  gSpriteCoordOffsetX = 0;
  gSpriteCoordOffsetY = 0;
  v4000014 = 0;
  v4000016 = 0;
  v1 = sub_8104A40(30, 0);
  v2 = sub_81051C0(v1);
  v3 = sub_8105100(v2);
  v4 = sub_81052EC(v3);
  v5 = sub_81053A0(v4);
  sub_810545C(v5);
  sub_8102680();
  sub_8074D08();
  current_map_music_set(392);
  return v7;
}
