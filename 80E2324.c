int __fastcall sub_80E2324(unsigned __int8 a1)
{
  unsigned __int8 v1; // r8@1
  signed int v2; // r2@1
  char v3; // r6@1
  char v4; // r7@1
  int v6; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = v202F7C8;
  v4 = v202F7C9;
  if ( word_3004B00[0] & 0x100 )
    v2 = sub_80791A8(1, 0, 0, 0, 0, 0, 0);
  if ( word_3004B02 & 0x100 )
    v2 |= 0x10000 << v3;
  if ( word_3004B04 & 0x100 )
    v2 |= 0x10000 << v4;
  InvertPlttBuffer(v2);
  move_anim_task_del(v1);
  return v6;
}
