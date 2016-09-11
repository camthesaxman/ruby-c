int __fastcall sub_8043DFC(unsigned __int8 a1)
{
  char *v1; // r2@1
  char *v2; // r0@1
  char *v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  v1[62] &= 0xFBu;
  v2 = &gSprites[68 * *((_WORD *)v1 + 28) + 62];
  *v2 &= 0xFBu;
  v3 = &gSprites[68 * *((_WORD *)v1 + 3) + 62];
  *v3 &= 0xFBu;
  return v5;
}
