signed int snowflake_add()
{
  int v0; // r1@1
  char *v1; // r4@2
  int v2; // r0@2
  signed int result; // r0@2

  v0 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839AB04, 0, 0);
  if ( v0 == 64 )
  {
    result = 0;
  }
  else
  {
    v1 = &gSprites[68 * v0];
    *((_WORD *)v1 + 27) = v202FECC;
    sub_807EC40(v1);
    v1[62] |= 2u;
    v2 = v202FECC;
    ++v202FECC;
    *(_DWORD *)((4 * v2 & 0x3FF) + 0x202F848) = v1;
    result = 1;
  }
  return result;
}
