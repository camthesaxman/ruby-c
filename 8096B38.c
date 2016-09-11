int sub_8096B38()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = call_via_r0(v2000000);
  v1 = sub_8097E44(v0);
  sub_8098734(v1);
  AnimateSprites();
  BuildOamBuffer();
  return v3;
}
