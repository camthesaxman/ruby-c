int sub_80C7240()
{
  char *v0; // r4@1
  int v1; // r6@1
  signed int v2; // r5@1
  int v4; // [sp+10h] [bp-4h]@0

  v0 = gSprites;
  v1 = 0;
  v2 = 63;
  do
  {
    if ( (_UNKNOWN *)dword_2020018[v1] == &gSpriteTemplate_83D2894 )
    {
      FreeSpritePalette((int)v0);
      DestroySprite((int)v0);
    }
    v0 += 68;
    v1 += 17;
    --v2;
  }
  while ( v2 >= 0 );
  return v4;
}
