int __fastcall sub_80A8818(int a1)
{
  int v1; // r6@1
  unsigned __int8 *v2; // r0@2
  int v3; // r7@4
  char *v4; // r4@7
  __int16 v5; // r0@7
  __int16 v6; // r0@7
  int v7; // r0@7
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
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
  v5 = *((_WORD *)v4 + 18) + *((_WORD *)v4 + 16);
  *(_WORD *)(v1 + 48) = v5;
  *(_WORD *)(v1 + 50) = v5 + word_3004B02;
  v6 = *((_WORD *)v4 + 19) + *((_WORD *)v4 + 17);
  *(_WORD *)(v1 + 52) = v6;
  *(_WORD *)(v1 + 54) = v6 + word_3004B04;
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 52) = *((_WORD *)v4 + 18) << 8;
  *(_WORD *)(v1 + 54) = *((_WORD *)v4 + 19) << 8;
  *(_WORD *)(v1 + 56) = v3;
  v7 = (unsigned __int16)word_3004B0A;
  *(_WORD *)(v1 + 58) = word_3004B0A;
  if ( v7 << 16 )
    oamt_set_x3A_32(v1, (int)sub_80A88F0);
  else
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_80784A8;
  return v9;
}
