int __fastcall sub_80B680C(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r0@1
  int v3; // r5@1
  char *v4; // r4@1
  unsigned int v5; // r6@1
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1 << 16;
  v3 = a2;
  v4 = &gSprites[68 * v200000F];
  v5 = v2 >> 16;
  *((_WORD *)v4 + 16) = (8 * sub_80B67EC(SHIWORD(v2)) & 0x7FF) + 27;
  *((_WORD *)v4 + 17) = (v3 << 16 >> 12) + 80;
  *((_WORD *)v4 + 25) = *((_WORD *)v4 + 23);
  *((_WORD *)v4 + 26) = *((_WORD *)v4 + 24);
  *((_WORD *)v4 + 23) = v5;
  *((_WORD *)v4 + 24) = v3;
  return v7;
}
