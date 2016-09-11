int sub_80B2968()
{
  char *v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = &gSprites[68 * v2024BE3];
  *((_WORD *)v0 + 18) = 0;
  *((_WORD *)v0 + 19) = 0;
  *((_WORD *)v0 + 16) = (unsigned __int8)sub_8077ABC(3u, 0);
  *((_WORD *)v0 + 17) = (unsigned __int8)sub_8077ABC(3u, 1u);
  v0[62] |= 4u;
  return v2;
}
