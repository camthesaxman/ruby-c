int __fastcall sub_8117890(int a1, unsigned __int8 a2, _WORD *a3)
{
  _WORD *v3; // r6@1
  __int16 v4; // r4@1
  int v5; // r3@1
  int v6; // r5@1
  char *v7; // r1@1
  __int16 v8; // r2@1
  int v9; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = **(_BYTE **)(a1 + 4);
  v6 = (unsigned __int8)CreateSprite(a1, 116, 80);
  v7 = &gSprites[68 * v6];
  *((_WORD *)v7 + 23) = *v3;
  *((_WORD *)v7 + 24) = v4;
  v7[62] |= 2u;
  v7[44] |= 0xC0u;
  v8 = *v3;
  v9 = *v3 + 30;
  *v3 = v9;
  if ( (unsigned int)(v9 << 16) > 0x1670000 )
    *v3 = v8 - 330;
  return v6;
}
