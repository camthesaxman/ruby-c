int __fastcall sub_80D9A38(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r4@2
  unsigned __int8 *v3; // r0@2
  int v4; // r2@5
  int v5; // r1@5
  char v6; // r0@5
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = v202F7C8;
    v3 = (unsigned __int8 *)33748937;
  }
  else
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v2024C07, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v2024C07, 3u);
    v2 = v202F7C9;
    v3 = (unsigned __int8 *)33748936;
  }
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(*v3) & 3);
  if ( sub_8076BE0() << 24 )
  {
    v4 = *(_BYTE *)(v1 + 3);
    v5 = 2 * (((unsigned int)(v4 << 26) >> 27) | 8);
    v6 = -63;
_080D9AD6:
    *(_BYTE *)(v1 + 3) = v6 & v4 | v5;
    goto _080D9ADC;
  }
  if ( !(battle_side_get_owner(v2) << 24) )
  {
    v4 = *(_BYTE *)(v1 + 3);
    v5 = 2 * (((unsigned int)(v4 << 26) >> 27) | 0x18);
    v6 = -63;
    goto _080D9AD6;
  }
_080D9ADC:
  *(_WORD *)(v1 + 46) = 16;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v2, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v2, 3u);
  obj_translate_based_on_private_1_2_3_4(v1);
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078BB8;
  return v8;
}
