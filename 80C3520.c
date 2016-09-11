int __fastcall sub_80C3520(__int16 a1)
{
  char *v1; // r1@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &gSprites[68 * v2018000];
  *((_WORD *)v1 + 16) += *((_WORD *)v1 + 18);
  *((_WORD *)v1 + 17) += *((_WORD *)v1 + 19);
  *((_WORD *)v1 + 19) = 0;
  *((_WORD *)v1 + 18) = 0;
  *((_WORD *)v1 + 29) = a1;
  *((_WORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 7) = sub_80C3630;
  v2018004 = 3;
  return v3;
}
