int __fastcall sub_80D9474(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  StartSpriteAffineAnim(a1, 0);
  *(_BYTE *)(v1 + 44) |= 0x80u;
  *(_WORD *)(v1 + 46) = 20;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
