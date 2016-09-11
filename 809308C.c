int __fastcall sub_809308C(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  int v2; // r1@1
  char *v3; // r0@1
  unsigned int v4; // r1@1
  char *v5; // r4@1
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 17 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A053C, 184, 4);
  v3 = &gSprites[v2 * 4];
  *((_WORD *)v3 + 23) = v1;
  *((_WORD *)v3 + 24) = 0;
  dword_2020020[v2] = (int)sub_8092FD8;
  v4 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A053C, 184, 108);
  v5 = &gSprites[v4];
  *((_WORD *)v5 + 23) = v1;
  *((_WORD *)v5 + 24) = 1;
  gSprites[v4 + 63] |= 2u;
  dword_2020020[v4 / 4] = (int)sub_8092FD8;
  return v7;
}
