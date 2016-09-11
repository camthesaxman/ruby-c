int __fastcall obj_anim_image_set_and_seek(int a1, char a2, char a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  *(_BYTE *)(a1 + 42) = a2;
  *(_BYTE *)(a1 + 44) &= 0xBFu;
  SeekSpriteAnim(a1, a3);
  return v4;
}
