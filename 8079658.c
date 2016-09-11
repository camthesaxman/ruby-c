int __fastcall obj_delete_but_dont_free_vram(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_BYTE *)(a1 + 63) |= 0x40u;
  DestroySprite(a1);
  return v2;
}
