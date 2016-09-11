int sub_81498CC()
{
  int v0; // r4@1
  int v1; // r5@2
  char *v2; // r4@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416EB8, 120, 56);
  if ( v0 != 64 )
  {
    v1 = 17 * v0;
    v2 = &gSprites[68 * v0];
    *((_WORD *)v2 + 26) = 3 - (unsigned __int16)Random() % 7u;
    *((_WORD *)v2 + 28) = (Random() & 0x3F) + 48;
    *((_WORD *)v2 + 30) = 0;
    v2[1] = v2[1] & 0xFC | 1;
    v2[3] |= 0x3Eu;
    v2[67] = 20;
    dword_2020020[v1] = (int)sub_81497FC;
  }
  return v4;
}
