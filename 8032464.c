int __fastcall refresh_graphics_maybe(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  char *v6; // r4@1
  unsigned __int8 v7; // r0@2
  int v9; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sub_8032350(a1, a2);
  v6 = &gSprites[68 * v5];
  StartSpriteAnim((int)v6, *(_BYTE *)(v3 + 33705604));
  if ( v4 )
    v7 = sub_8077F68(v3);
  else
    v7 = sub_8077F7C(v3);
  *((_WORD *)v6 + 17) = v7;
  return v9;
}
