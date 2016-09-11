int __fastcall sub_806C9C4(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned __int8 v3; // r0@1
  char *v4; // r2@1
  char *v5; // r1@1
  int v7; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = sub_806CA00(a1);
  v4 = &gSprites[68 * v2];
  v5 = &gSprites[68 * v3];
  *((_WORD *)v4 + 16) = *((_WORD *)v5 + 16);
  *((_WORD *)v4 + 17) = *((_WORD *)v5 + 17);
  *((_WORD *)v4 + 23) = *((_WORD *)v5 + 23);
  return v7;
}
