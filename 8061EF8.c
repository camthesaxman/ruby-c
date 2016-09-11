int __fastcall npc_set_direction_and_anim__an_proceed(int a1, int a2, char a3, unsigned __int8 a4)
{
  int v4; // r6@1
  int v5; // r5@1
  char v6; // r4@1
  int v8; // [sp+Ch] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  obj_anim_image_set_and_seek(a2, a4, 0);
  FieldObjectSetDirection(v4, v6);
  *(_WORD *)(v5 + 50) = 1;
  return v8;
}
