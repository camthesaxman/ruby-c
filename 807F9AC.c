int sub_807F9AC()
{
  unsigned int v0; // r5@2
  int v1; // r0@3
  char *v2; // r4@4
  int *v3; // r2@4
  int v5; // [sp+8h] [bp-4h]@0

  if ( !v202FEE8 )
  {
    v0 = 0;
    do
    {
      v1 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839ABD0, 0, 0);
      if ( v1 == 64 )
      {
        v3 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F8D8) = 0;
      }
      else
      {
        v2 = &gSprites[68 * v1];
        *((_WORD *)v2 + 24) = 0;
        *((_WORD *)v2 + 25) = v0 % 5;
        *((_WORD *)v2 + 26) = (unsigned __int8)(v0 / 5);
        *((_WORD *)v2 + 23) = (*((_WORD *)v2 + 26) << 6) + 32;
        v3 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F8D8) = v2;
      }
      v0 = (v0 + 1) & 0xFF;
    }
    while ( v0 <= 0x13 );
    *(_BYTE *)(*v3 + 1792) = 1;
  }
  return v5;
}
