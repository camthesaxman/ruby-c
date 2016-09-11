int sub_8136244()
{
  int v1; // [sp+0h] [bp-4h]@0

  call_via_r0(*v2039304);
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v1;
}
