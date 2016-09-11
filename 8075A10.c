int ma00_load_graphics()
{
  int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  LoadCompressedObjectPic(&dword_836A8E4[2 * v0]);
  LoadCompressedObjectPalette(&dword_836B1EC[2 * v0]);
  v202F7A4 += 2;
  sub_8075940(v0 - 10000);
  v202F7B0 = 1;
  v202F7AC = move_anim_waiter;
  return v2;
}
