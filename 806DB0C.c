int __fastcall sub_806DB0C(unsigned __int8 a1, char a2)
{
  __int16 v2; // r6@1
  char v3; // r9@1
  int v4; // r3@1
  int v5; // r4@1
  char *v6; // r5@1
  int *v7; // r4@1
  int v9; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)gSprites[68 * a1 + 67];
  v5 = 17 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_837660C, 250, 170);
  v6 = &gSprites[v5 * 4];
  *((_WORD *)v6 + 18) = 4;
  *((_WORD *)v6 + 19) = 10;
  v7 = &dword_2020020[v5];
  *v7 = (int)sub_806DAB4;
  *((_WORD *)v6 + 30) = v2;
  StartSpriteAnim((int)v6, v3);
  call_via_r1(v6, *v7);
  return v9;
}
