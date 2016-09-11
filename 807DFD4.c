int sub_807DFD4()
{
  unsigned int v0; // r5@2
  int v1; // r3@3
  char *v2; // r4@4
  int v4; // [sp+8h] [bp-4h]@0

  if ( v202FEC6 != 1 )
  {
    LoadSpriteSheet((int)"HÅ9\b");
    sub_807D8C0((int)&gUnknown_08397108);
    v0 = 0;
    do
    {
      v1 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_839A9F0, 0, 0);
      if ( v1 == 64 )
      {
        *(_DWORD *)(4 * v0 + 0x202F9DC) = 0;
      }
      else
      {
        v2 = &gSprites[68 * v1];
        *(_DWORD *)(4 * v0 + 0x202F9DC) = v2;
        sub_80603CC(
          gUnknown_0839A9C8[2 * v0] + 7,
          gUnknown_0839A9C8[2 * v0 + 1] + 7,
          (_WORD *)v2 + 16,
          (_WORD *)v2 + 17);
        v2[62] |= 2u;
      }
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 2 );
    v202FEC6 = 1;
  }
  return v4;
}
