int __fastcall sub_80CF008(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( !(v2 << 16) )
  {
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
    StartSpriteAnim(v1, *(_BYTE *)(v1 + 48));
    *(_DWORD *)(v1 + 28) = sub_8078600;
  }
  return v4;
}
