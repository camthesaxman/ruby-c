int __fastcall sub_812C1D0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (((sub_8077ABC(v202F7C9, 2u) << 16) & 0xFFFFFF) + 0x80000) >> 16;
  v3 = sub_8077ABC(v202F7C9, 3u);
  sub_8046234(v2, (((v3 << 16) & 0xFFFFFFu) + 0x80000) >> 16, 0);
  move_anim_task_del(v1);
  return v5;
}
