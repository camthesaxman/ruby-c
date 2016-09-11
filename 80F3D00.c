int sub_80F3D00()
{
  int v0; // r5@2
  int i; // r4@2
  unsigned __int8 v2; // r0@3
  char *v3; // r0@4
  int v5; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(4 * v20087DC + 0x200893F) & 0x40 )
  {
    v0 = *(_BYTE *)(v2008FE9 + 0x2008931);
    for ( i = 0; i < v0 + 1; i = (i + 1) & 0xFFFF )
    {
      v2 = CreateSprite((int)&gSpriteTemplate_83E4800, 0, 0);
      if ( v2 == 64 )
        break;
      v3 = &gSprites[68 * v2];
      *(_DWORD *)(4 * i + 0x2008800) = v3;
      v3[62] |= 4u;
    }
    sub_80F3F20(v0, 1);
  }
  return v5;
}
