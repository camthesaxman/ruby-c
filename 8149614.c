int __fastcall sub_8149614(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  int v2; // r0@1
  char *v3; // r2@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416EB8, 120, 88);
  if ( v2 != 64 )
  {
    v3 = &gSprites[68 * v2];
    *((_WORD *)v3 + 28) = 48;
    *((_WORD *)v3 + 29) = v1;
    *((_WORD *)v3 + 30) = 0;
    v3[1] = v3[1] & 0xFC | 1;
    v3[3] |= 0x3Eu;
    dword_2020020[17 * v2] = (int)sub_8149558;
  }
  return v5;
}
