int __fastcall sub_81047EC(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r0@1
  unsigned __int8 v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v200000B = 0;
  v200000A = v2000005;
  gSpriteCoordOffsetX = 0;
  v4000014 = 0;
  v200001A = 8;
  v2 = sub_810514C();
  v3 = sub_81054B8(v2);
  sub_8105524(v3);
  current_map_music_set(v2000060);
  if ( v200000A )
  {
    sub_8104CAC(4);
    *(_WORD *)(v1 + 10) = dp15_jump_random_unknown();
    *(_WORD *)(v1 + 12) = 0;
    *(_WORD *)(v1 + 14) = 0;
    ++*(_WORD *)(v1 + 8);
  }
  else
  {
    v4 = FindTaskIdByFunc((int)sub_810434C);
    DestroyTask(v4);
  }
  return v6;
}
