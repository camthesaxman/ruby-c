int __fastcall sub_8105BF8(int a1, int a2, __int16 a3, __int16 a4, __int16 a5)
{
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r7@1
  char *v8; // r2@1
  int v9; // r1@1

  v5 = a2;
  v6 = 4 * a1 & 0x3FF;
  v7 = (unsigned __int8)CreateSprite(*(int *)((char *)&gUnknown_083EDB5C + v6), a3, a4);
  v8 = &gSprites[68 * v7];
  v8[5] |= 0xCu;
  *((_DWORD *)v8 + 7) = v5;
  *((_WORD *)v8 + 29) = a5;
  *((_WORD *)v8 + 30) = 1;
  v9 = *(int *)((char *)&gUnknown_083EDBC4 + v6);
  if ( v9 )
    SetSubspriteTables((int)v8, v9);
  return v7;
}
