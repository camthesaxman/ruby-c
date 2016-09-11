int __fastcall sub_8149794(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r6@1
  __int16 v3; // r5@1
  int v4; // r0@1
  char *v5; // r2@2
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416EB8, 120, 56);
  if ( v4 != 64 )
  {
    v5 = &gSprites[68 * v4];
    *((_WORD *)v5 + 26) = v3;
    *((_WORD *)v5 + 28) = 120;
    *((_WORD *)v5 + 29) = v2;
    *((_WORD *)v5 + 30) = 0;
    v5[1] = v5[1] & 0xFC | 1;
    v5[3] |= 0x3Eu;
    v5[67] = 1;
    dword_2020020[17 * v4] = (int)sub_814974C;
  }
  return v7;
}
