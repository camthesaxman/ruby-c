int sub_8080178()
{
  unsigned int v0; // r7@2
  unsigned int v1; // r6@3
  int v2; // r1@3
  char *v3; // r4@4
  int *v4; // r2@4
  int v6; // [sp+14h] [bp-4h]@0

  if ( !v202FEFE )
  {
    LoadSpriteSheet((int)"ȟ9\b");
    sub_807D8C0((int)&gUnknown_08397128);
    v0 = 0;
    do
    {
      v1 = v0 / 5;
      v2 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839AC3C, 0, (unsigned __int16)(v0 / 5) << 6);
      if ( v2 == 64 )
      {
        v4 = &gUnknown_08396FC4;
        *(_DWORD *)(4 * v0 + 0x202F978) = 0;
      }
      else
      {
        v3 = &gSprites[68 * v2];
        *(_DWORD *)(4 * v0 + 0x202F978) = v3;
        *((_WORD *)v3 + 23) = v0 % 5;
        *(_WORD *)(*(_DWORD *)(4 * v0 + 0x202F978) + 48) = v1;
        v4 = &gUnknown_08396FC4;
      }
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x13 );
    *(_BYTE *)(*v4 + 1814) = 1;
  }
  return v6;
}
