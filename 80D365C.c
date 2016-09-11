int __fastcall sub_80D365C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int *v2; // r0@1
  int v3; // r1@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  word_3004B0E = (word_3004B0E + 3) & 0xFF;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) - 1;
  *((_WORD *)v2 + 4) = v3;
  if ( !(v3 << 16) )
    move_anim_task_del(v1);
  return v5;
}
