int __fastcall sub_80CFE9C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r6@1
  int v3; // r7@1
  int v4; // r0@3
  int v5; // r6@3
  int v6; // r0@3
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  v3 = ((unsigned __int8)sub_8077ABC(v202F7C9, 3u) + (unsigned __int16)word_3004B06) & 0xFFFF;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  v4 = (v2 + (unsigned __int16)word_3004B04) << 16;
  v5 = (v2 + (unsigned __int16)word_3004B04) & 0xFFFF;
  v6 = sub_80790F0(HIWORD(v4) - *(_WORD *)(v1 + 32), v3 - *(_WORD *)(v1 + 34));
  sub_8078FDC(v1, 0, 0x100u, 0x100u, (unsigned int)((v6 << 16) - 0x40000000) >> 16);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = v5;
  *(_WORD *)(v1 + 54) = v3;
  *(_DWORD *)(v1 + 28) = sub_8078C00;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v8;
}
