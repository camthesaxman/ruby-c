int __fastcall sub_80D6080(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+0h] [bp-14h]@1
  unsigned __int8 v4; // [sp+8h] [bp-Ch]@1
  int v5; // [sp+10h] [bp-4h]@1

  v1 = a1;
  sub_8078914((int)&v3);
  BlendPalette(16 * v4, 0x10u, word_3004B00[0], word_3004B02);
  move_anim_task_del(v1);
  return v5;
}
