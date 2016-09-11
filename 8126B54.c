int sub_8126B54()
{
  int result; // r0@1
  char *v1; // r1@2

  result = (unsigned __int8)CreateSpriteAtEnd(137840576, 0, 0);
  if ( result != 64 )
  {
    v1 = &gSprites[68 * result];
    v1[5] = v1[5] & 0xF3 | 4;
    v1[62] |= 6u;
  }
  return result;
}
