int __fastcall unref_sub_80CE2D4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int i; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  for ( i = 0; i < v2024A68; i = (i + 1) & 0xFF )
    sub_8043DFC(byte_3004340[i]);
  move_anim_task_del(v1);
  return v4;
}
