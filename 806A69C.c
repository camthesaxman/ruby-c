int __fastcall sub_806A69C(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  int v2; // r0@1
  char *v3; // r0@1
  int v4; // r0@1
  char *v5; // r0@1
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  LoadSpritePalette((int)&gUnknown_083764BC);
  v2 = 17 * (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_83764E8, 53, 68);
  dword_2020020[v2] = (int)sub_806A480;
  v3 = &gSprites[v2 * 4];
  *((_WORD *)v3 + 23) = v1;
  *((_WORD *)v3 + 24) = -1;
  v4 = 17 * (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_83764E8, 53, 68);
  dword_2020020[v4] = (int)sub_806A59C;
  v5 = &gSprites[v4 * 4];
  *((_WORD *)v5 + 23) = v1;
  *((_WORD *)v5 + 24) = -1;
  return v7;
}
