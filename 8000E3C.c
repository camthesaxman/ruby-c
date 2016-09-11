signed int __fastcall CreateSpriteAndAnimate(int a1, int a2, int a3, char a4)
{
  char v4; // r9@1
  unsigned int v5; // r3@1
  int v6; // r12@1
  int v7; // r8@1
  int v8; // r6@2
  char *v9; // r4@2
  _BYTE *v10; // r7@2
  int v11; // r5@3

  v4 = a4;
  v5 = 0;
  v6 = a2 << 16;
  v7 = a3 << 16;
  while ( 1 )
  {
    v8 = 17 * v5;
    v9 = &gSprites[68 * v5];
    v10 = v9 + 62;
    if ( !(*v10 << 31) )
      break;
    v5 = (v5 + 1) & 0xFF;
    if ( v5 > 0x3F )
      return 64;
  }
  v11 = (unsigned __int8)CreateSpriteAt(v5, a1, SHIWORD(v6), SHIWORD(v7), v4);
  if ( v11 == 64 )
    return 64;
  call_via_r1(v9, dword_2020020[v8]);
  if ( *v10 << 31 )
    AnimateSprite(v9);
  return v11;
}
