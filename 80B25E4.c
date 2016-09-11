int __fastcall sub_80B25E4(unsigned __int8 a1)
{
  int v1; // r9@1
  signed int v2; // r6@1
  char v3; // r0@2
  char *v4; // r3@2
  char *v5; // r0@2
  char *v6; // r0@3
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = AllocOamMatrix();
    v4 = &gSprites[68 * *(_BYTE *)(4 * v2 + 0x2019338)];
    v4[3] = v4[3] & 0xC1 | 2 * (v3 & 0x1F);
    v5 = &gSprites[68 * *(_BYTE *)(4 * v2 + 0x2019338)];
    v5[1] = v5[1] & 0xFC | 1;
    StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(4 * v2 + 0x2019338)], v1);
    if ( v1 == 2 )
    {
      AnimateSprite((int)&gSprites[68 * *(_BYTE *)(4 * v2 + 0x2019338)]);
      v6 = &gSprites[68 * *(_BYTE *)(4 * v2 + 0x2019338) + 62];
      *v6 &= 0xFBu;
    }
    ++v2;
  }
  while ( v2 <= 3 );
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80B26C8, 5) + 2]) = v1;
  v201920B |= 2u;
  return v8;
}
