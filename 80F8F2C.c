int sub_80F8F2C()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v20000FB )
  {
    AnimateSprites();
    BuildOamBuffer();
  }
  call_via_r0(v20000F0);
  return v1;
}
