int __fastcall sub_8080588(int a1)
{
  int v1; // r2@1
  char *v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int8)CreateSpriteAtEnd(
                          (int)&gSpriteTemplate_839ACBC,
                          *(_WORD *)((char *)&gUnknown_0839AC78 + (4 * a1 & 0x3FFFF)),
                          *(_WORD *)((char *)&unk_839AC7A + (4 * a1 & 0x3FFFF)) - gSpriteCoordOffsetY);
  if ( v1 != 64 )
  {
    v2 = &gSprites[68 * v1];
    v2[5] = v2[5] & 0xF3 | 4;
    v2[62] |= 2u;
    *((_WORD *)v2 + 23) = 0;
    *((_WORD *)v2 + 24) = 0;
    *((_WORD *)v2 + 25) = 0;
    ++v202FF14;
  }
  return v4;
}
