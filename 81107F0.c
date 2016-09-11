int sub_81107F0()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = call_via_r0(v2000000);
  sub_8111110(v0);
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v2;
}
