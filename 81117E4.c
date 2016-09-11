int sub_81117E4()
{
  unsigned int v0; // r4@2
  unsigned int v1; // r4@5
  int v2; // r0@6
  char *v3; // r2@7
  int v5; // [sp+10h] [bp-4h]@0

  if ( v2000110 )
  {
    v0 = 0;
    do
    {
      *(_DWORD *)(4 * v0 + 0x2000FA8) = 0;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 2 );
  }
  else
  {
    v1 = 0;
    do
    {
      v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F8674, ((v1 << 21) + 10485760) >> 16, 140);
      if ( v2 == 64 )
      {
        *(_DWORD *)(4 * v1 + 0x2000FA8) = 0;
      }
      else
      {
        v3 = &gSprites[68 * v2];
        *((_WORD *)v3 + 2) = *((_WORD *)v3 + 2) & 0xFC00 | ((*((_WORD *)v3 + 2) & 0x3FF) + 16 * v1) & 0x3FF;
        *(_DWORD *)(4 * v1 + 0x2000FA8) = v3;
      }
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 2 );
  }
  return v5;
}
