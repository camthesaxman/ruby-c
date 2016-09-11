signed int sub_807E7B4()
{
  int v0; // r7@2
  int v1; // r5@2
  char *v2; // r1@3
  char *v3; // r0@4
  __int16 v4; // r6@4
  char *v5; // r4@5
  unsigned int v6; // r3@8
  int v7; // r2@9

  if ( v202FEC2 == 24 )
    return 0;
  v0 = v202FEC2;
  v1 = (unsigned __int8)CreateSpriteAtEnd(
                          (int)&gSpriteTemplate_839AAA4,
                          gUnknown_0839AA08[2 * v202FEC2],
                          gUnknown_0839AA08[2 * v202FEC2 + 1]);
  if ( v1 == 64 )
  {
    *(_DWORD *)(4 * v0 + 0x202F7E8) = 0;
  }
  else
  {
    v2 = &gSprites[68 * v1];
    *((_WORD *)v2 + 28) = 0;
    *((_WORD *)v2 + 24) = 145 * v0;
    if ( (signed __int16)(145 * v0) > 599 )
    {
      do
      {
        v3 = &gSprites[68 * v1];
        v4 = *((_WORD *)v3 + 24);
        *((_WORD *)v3 + 24) = v4 - 600;
      }
      while ( (signed __int16)(v4 - 600) > 599 );
    }
    v5 = &gSprites[68 * v1];
    sub_807E4EC((int)v5);
    sub_807E6F0((int)v5, 9 * v0);
    v5[62] |= 4u;
    *(_DWORD *)(4 * v0 + 0x202F7E8) = v5;
  }
  ++v202FEC2;
  if ( v202FEC2 == 24 )
  {
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(4 * v6 + 0x202F7E8);
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 58) )
          *(_DWORD *)(v7 + 28) = sub_807E6C4;
        else
          *(_DWORD *)(v7 + 28) = sub_807E5C0;
      }
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v6 <= 0x17 );
    return 0;
  }
  return 1;
}
