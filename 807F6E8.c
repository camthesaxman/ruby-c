int sub_807F6E8()
{
  unsigned int v0; // r5@2
  int v1; // r0@3
  char *v2; // r4@4
  int *v3; // r2@4
  int v5; // [sp+0h] [bp-14h]@2
  int v6; // [sp+4h] [bp-10h]@2
  int v7; // [sp+10h] [bp-4h]@8

  if ( !v202FEE3 )
  {
    v5 = 137984328;
    v6 = 302057472;
    LoadSpriteSheet((int)&v5);
    v0 = 0;
    do
    {
      v1 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839AB90, 0, 0);
      if ( v1 == 64 )
      {
        v3 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F888) = 0;
      }
      else
      {
        v2 = &gSprites[68 * v1];
        *((_WORD *)v2 + 23) = v0 % 5;
        *((_WORD *)v2 + 16) = (v0 % 5 << 6) + 32;
        *((_WORD *)v2 + 17) = ((unsigned __int16)(v0 / 5) << 6) + 32;
        v3 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F888) = v2;
      }
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    *(_BYTE *)(*v3 + 1787) = 1;
  }
  return v7;
}
