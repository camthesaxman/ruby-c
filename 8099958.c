int sub_8099958()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *v20010CC )
  {
    *(_BYTE *)(*v20010CC + 62) &= 0xFBu;
    StartSpriteAffineAnim(*v20010CC, 1);
  }
  return v1;
}
