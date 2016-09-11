int sub_80E6A88()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  call_via_r0(v2001020);
  AnimateSprites();
  v0 = BuildOamBuffer();
  sub_80EAD08(v0);
  return v2;
}
