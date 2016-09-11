int sub_80C6508()
{
  int v0; // r2@1

  v0 = MapGridGetMetatileBehaviorAt(v203923C, v203923E) & 0xFFF;
  if ( v0 == 150 )
    v202FFA0 = 0;
  if ( v0 == 156 )
    v202FFA0 = 2;
  sub_80C6280();
  CreateSprite(
    (int)&gSpriteTemplate_83D262C,
    (*(_WORD *)&gSprites[68 * v202E85C + 2] & 0x1FF) + v202FF98,
    (unsigned __int8)gSprites[68 * v202E85C] + v202FF9C);
  if ( v202FFA0 == 1 || v202FFA0 == 3 )
    sub_80BB800();
  return 0;
}
