int sub_80C3764()
{
  char *v0; // r2@1
  _WORD *v1; // r2@1
  signed int v2; // r3@1
  char *v3; // r1@2
  int v5; // [sp+10h] [bp-4h]@0

  v0 = &gSprites[68 * v2018001];
  v0[62] |= 4u;
  v1 = v0 + 46;
  v2 = 2;
  do
  {
    v3 = &gSprites[68 * *v1 + 62];
    *v3 |= 4u;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000040 = 0;
  v4000044 = 0;
  v4000048 = 16191;
  return v5;
}
