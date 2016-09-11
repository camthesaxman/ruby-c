int __fastcall sub_80CABC0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) &= 0xFBu;
  StartSpriteAnim(a1, 1);
  *(_WORD *)(v1 + 46) = 60;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
