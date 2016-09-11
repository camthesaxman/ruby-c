int __fastcall sub_80E2908(int a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  char *v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  v2 = &gSprites[68 * *(_WORD *)(v1 + 46)];
  *(_WORD *)(v1 + 32) = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
  v3 = &gSprites[68 * *(_WORD *)(v1 + 46)];
  *(_WORD *)(v1 + 34) = *((_WORD *)v3 + 19) + *((_WORD *)v3 + 17);
  *(_WORD *)(v1 + 36) = word_3004B02;
  *(_WORD *)(v1 + 38) = word_3004B04;
  StartSpriteAffineAnim(v1, word_3004B06);
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  return v5;
}
