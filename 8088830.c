int __fastcall sub_8088830(int a1, unsigned int a2, unsigned int a3)
{
  __int16 v3; // r5@1
  __int16 v4; // r6@1
  int result; // r0@1
  char *v6; // r2@1

  v3 = (unsigned __int16)((a1 & 0x80000000) >> 16) >> 8;
  v4 = a1;
  result = (unsigned __int8)sub_8085B88(a1, a2, a3, 320, 80);
  v6 = &gSprites[68 * result];
  *((_DWORD *)v6 + 7) = SpriteCallbackDummy;
  v6[5] &= 0xF3u;
  *((_WORD *)v6 + 23) = v4;
  *((_WORD *)v6 + 29) = v3;
  return result;
}
