int __fastcall sub_813E930(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  unsigned int v2; // r4@1
  char *v3; // r5@1
  int v4; // r1@2
  char *v5; // r0@3
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = &gSprites[68 * a1];
  do
  {
    v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B124, *((_WORD *)v3 + 16), *((_WORD *)v3 + 17));
    if ( v4 != 64 )
    {
      v5 = &gSprites[68 * v4];
      *((_WORD *)v5 + 23) = v1;
      *((_WORD *)v5 + 24) = 32 * v2;
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  return v7;
}
