int __fastcall sub_814A158(unsigned __int8 a1)
{
  int *v1; // r4@1
  char *v2; // r2@1
  char *v3; // r2@1
  char *v4; // r1@1
  char *v5; // r1@1
  char *v6; // r1@1
  char *v7; // r1@1
  int v9; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &gSprites[68 * *((_WORD *)v1 + 5)];
  v2[1] &= 0xFCu;
  v3 = &gSprites[68 * *((_WORD *)v1 + 5)];
  v3[3] &= 0xC1u;
  v4 = &gSprites[68 * *((_WORD *)v1 + 5) + 62];
  *v4 |= 4u;
  v5 = &gSprites[68 * *((_WORD *)v1 + 6)];
  v5[1] &= 0xFCu;
  v6 = &gSprites[68 * *((_WORD *)v1 + 6)];
  v6[3] &= 0xC1u;
  v7 = &gSprites[68 * *((_WORD *)v1 + 6) + 62];
  *v7 &= 0xFBu;
  DestroyTask(a1);
  return v9;
}
