int __fastcall CopyToSprites(char *a1)
{
  char *v1; // r1@1
  char *v2; // r3@1
  unsigned int v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = gSprites;
  v3 = 0;
  do
  {
    *v2++ = *v1++;
    ++v3;
  }
  while ( v3 <= 0x10FF );
  return v5;
}
