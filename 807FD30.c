int sub_807FD30()
{
  unsigned int v0; // r6@2
  unsigned int v1; // r5@3
  int v2; // r0@3
  char *v3; // r4@4
  int *v4; // r2@4
  int v6; // [sp+0h] [bp-18h]@2
  int v7; // [sp+4h] [bp-14h]@2
  int v8; // [sp+14h] [bp-4h]@8

  if ( !v202FF0C )
  {
    v6 = 137982280;
    v7 = 302188544;
    LoadSpriteSheet((int)&v6);
    v0 = 0;
    do
    {
      v1 = v0 / 5;
      v2 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839AC04, 0, (unsigned __int16)(v0 / 5) << 6);
      if ( v2 == 64 )
      {
        v4 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F928) = 0;
      }
      else
      {
        v3 = &gSprites[68 * v2];
        *((_WORD *)v3 + 23) = v0 % 5;
        *((_WORD *)v3 + 24) = v1;
        v4 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F928) = v3;
      }
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    *(_BYTE *)(*v4 + 1828) = 1;
  }
  return v8;
}
