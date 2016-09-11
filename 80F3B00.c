int sub_80F3B00()
{
  char *v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = sub_80F3A3C(v200BC90, v200BC91);
  v2009348 = v0;
  if ( v0 )
  {
    StartSpriteAffineAnim((int)v0, 1);
    v200BC92 = 1;
  }
  else
  {
    v200BC92 = 0;
  }
  return v2;
}
