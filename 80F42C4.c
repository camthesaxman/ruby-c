int __fastcall sub_80F42C4(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v3; // r0@2
  char *v4; // r3@3
  int v6; // [sp+0h] [bp-1Ch]@1
  int v7; // [sp+4h] [bp-18h]@1
  int v8; // [sp+18h] [bp-4h]@6

  v6 = 33608164;
  v7 = 1705216;
  sub_80F4194(33608164, a1);
  LoadSpriteSheet((int)&v6);
  LoadSpritePalette((int)&gUnknown_083E4868);
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E4878, ((v2 << 21) + 7405568) >> 16, 16);
    if ( v3 == 64 )
    {
      *(_DWORD *)(4 * v2 + 0x200CED4) = 0;
    }
    else
    {
      v4 = &gSprites[68 * v3];
      *((_WORD *)v4 + 2) = *((_WORD *)v4 + 2) & 0xFC00 | (v1 + (*((_WORD *)v4 + 2) & 0x3FF)) & 0x3FF;
      *(_DWORD *)(4 * v2 + 0x200CED4) = v4;
    }
    v1 = (v1 + 8) & 0xFFFF;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 4 );
  return v8;
}
