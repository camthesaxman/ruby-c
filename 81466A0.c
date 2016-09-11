int sub_81466A0()
{
  unsigned int v0; // r5@1
  int v1; // r0@2
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_WORD *)(2 * v0 + 0x203932E);
    if ( v1 != -1 )
    {
      DestroySprite((int)&gSprites[68 * v1]);
      *(_WORD *)(2 * v0 + 0x203932E) = -1;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  return v3;
}
