int __fastcall sub_80A8764(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@2
  int v3; // r6@4
  char *v4; // r1@7
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *(_BYTE *)(*v2 + 0x2024BE0);
  if ( battle_side_get_owner(*v2) << 24 )
  {
    word_3004B02 = -word_3004B02;
    if ( word_3004B06 == 1 )
      word_3004B04 = -word_3004B04;
  }
  *(_WORD *)(v1 + 46) = word_3004B08;
  v4 = &gSprites[68 * v3];
  *(_WORD *)(v1 + 48) = *((_WORD *)v4 + 16);
  *(_WORD *)(v1 + 50) = word_3004B02 + *((_WORD *)v4 + 16);
  *(_WORD *)(v1 + 52) = *((_WORD *)v4 + 17);
  *(_WORD *)(v1 + 54) = word_3004B04 + *((_WORD *)v4 + 17);
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 56) = v3;
  *(_BYTE *)(v1 + 62) |= 4u;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_80784A8;
  return v6;
}
