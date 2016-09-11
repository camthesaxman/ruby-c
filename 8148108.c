int __fastcall sub_8148108(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int v4; // r6@1
  char *v5; // r0@2
  void **v6; // r1@2
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 68 * a1;
  FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[v4 + 3] << 26 >> 27);
  gSprites[v4 + 1] |= 3u;
  if ( v3 )
  {
    v5 = (char *)&unk_2020014 + v4;
    v6 = &gSpriteAffineAnimTable_84121A8;
  }
  else
  {
    v5 = (char *)&unk_2020014 + v4;
    v6 = &gSpriteAffineAnimTable_84121A4;
  }
  *(_DWORD *)v5 = v6;
  InitSpriteAffineAnim((int)&gSprites[68 * v2]);
  return v8;
}
