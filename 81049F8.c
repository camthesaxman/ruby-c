int sub_81049F8()
{
  signed int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  gSpriteCoordOffsetX = 0;
  v4000014 = 0;
  v0 = current_map_music_set(v2000060);
  v1 = sub_810514C(v0);
  v2 = sub_8105554(v1);
  v3 = sub_8105524(v2);
  sub_81059B8(v3);
  v4 = FindTaskIdByFunc((int)sub_810434C);
  DestroyTask(v4);
  return v6;
}
