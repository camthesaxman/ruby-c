int __fastcall sub_812C2BC(int a1)
{
  int v1; // r5@1
  __int16 v2; // r7@1
  __int16 v3; // r6@1
  unsigned int v4; // r4@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  sub_8078764(v1, 1);
  v4 = (unsigned int)((sub_80790F0(*(_WORD *)(v1 + 32) - v2, *(_WORD *)(v1 + 34) - v3) << 16) + 1610612736) >> 16;
  if ( sub_8076BE0() << 24 )
    v4 = (v4 + 0x4000) & 0xFFFF;
  sub_8078FDC(v1, 0, 0x100u, 0x100u, v4);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 54) = v3;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v6;
}
