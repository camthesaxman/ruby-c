int __fastcall sub_8047580(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, int a6, unsigned __int8 a7, int a8)
{
  __int16 v8; // r10@1
  __int16 v9; // r7@1
  __int16 v10; // r6@1
  __int16 v11; // r8@1
  int result; // r0@1
  char *v13; // r2@1

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  LoadCompressedObjectPic(&gUnknown_0820A92C);
  LoadCompressedObjectPalette((_DWORD *)"Ф%а\bиж");
  result = (unsigned __int8)CreateSprite((int)"ижижьЉ \b4Њ \b", v10, v11);
  v13 = &gSprites[68 * result];
  *((_WORD *)v13 + 23) = v8;
  *((_WORD *)v13 + 24) = a7;
  *((_WORD *)v13 + 25) = v9;
  *((_WORD *)v13 + 26) = a8;
  *((_WORD *)v13 + 27) = HIWORD(a8);
  v13[5] = v13[5] & 0xF3 | 4 * (a5 & 3);
  dword_2020020[17 * result] = (int)sub_8047638;
  return result;
}
