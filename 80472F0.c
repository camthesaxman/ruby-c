int __fastcall CreatePokeballSprite(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, int a6, unsigned __int8 a7, int a8)
{
  int v8; // r5@1
  __int16 v9; // ST00_2@1
  __int16 v10; // r9@1
  __int16 v11; // r10@1
  unsigned int v12; // r4@1
  char *v13; // r1@1
  char *v14; // r2@1
  int v16; // [sp+20h] [bp-4h]@0

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  LoadCompressedObjectPic(&gUnknown_0820A92C);
  LoadCompressedObjectPalette((_DWORD *)"ƒ%–\bÿ÷");
  v12 = 68 * (unsigned __int8)CreateSprite((int)"ÿ÷ÿ÷Ï© \b4™ \b", v10, v11);
  v13 = &gSprites[v12];
  *((_WORD *)v13 + 23) = v8;
  v14 = &gSprites[68 * v8];
  *((_WORD *)v13 + 28) = *((_WORD *)v14 + 16);
  *((_WORD *)v13 + 29) = *((_WORD *)v14 + 17);
  *((_WORD *)v14 + 16) = v10;
  *((_WORD *)v14 + 17) = v11;
  *((_WORD *)v13 + 24) = a7;
  *((_WORD *)v13 + 25) = v9;
  *((_WORD *)v13 + 26) = a8;
  *((_WORD *)v13 + 27) = HIWORD(a8);
  v13[5] = gSprites[v12 + 5] & 0xF3 | 4 * (a5 & 3);
  dword_2020020[v12 / 4] = (int)sub_80473D0;
  v14[62] |= 4u;
  return v16;
}
