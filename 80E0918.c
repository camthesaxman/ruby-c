int __fastcall sub_80E0918(unsigned __int8 a1)
{
  unsigned __int8 v1; // r10@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r0@2
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = battle_get_per_side_status_permutated(v202F7C8);
  v3 = (-(v2 ^ 1) | v2 ^ 1u) >> 31;
  sub_8076034(v202F7C8, v3);
  v4 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 62];
  *v4 &= 0xFBu;
  if ( b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
  {
    sub_8076034(v202F7C8 ^ 2, v3 ^ 1);
    v5 = &gSprites[68 * *(_BYTE *)((v202F7C8 ^ 2) + 0x2024BE0) + 62];
    *v5 &= 0xFBu;
  }
  move_anim_task_del(v1);
  return v7;
}
