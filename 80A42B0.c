signed int __fastcall sub_80A42B0(unsigned __int8 a1, int a2)
{
  int v2; // r7@1
  int v3; // r6@1
  char *v4; // r0@1
  int v5; // r1@1
  int v6; // r0@1
  unsigned int v7; // r5@4
  char *v8; // r0@4

  v2 = a2;
  v3 = a1;
  v4 = &byte_3005D10[4 * v2038559];
  v5 = (unsigned __int8)v4[1] + v3;
  v6 = (unsigned __int8)v4[2];
  if ( v5 > v6 )
    return 1;
  if ( v5 == v6 )
  {
    if ( byte_3000701 != 5 )
    {
      v7 = (unsigned int)((v3 << 25) + 0x2000000) >> 24;
      sub_8072C74((int)&gStringVar1, (int)"╫фим©", 0x78u, 0);
      MenuPrint((int)&gStringVar1, 14, v7);
      v8 = (char *)&unk_20221E8 + 64 * v7;
      *(_WORD *)v8 = 79;
      *((_WORD *)v8 + 1) = 79;
      *((_WORD *)v8 + 32) = 79;
      *((_WORD *)v8 + 33) = 79;
      if ( v3 != 7 )
      {
        if ( v2 == 1 && v2038542 || v2 == 2 )
          MenuFillWindowRectWithBlankTile(0xEu, ((unsigned int)((v3 << 25) + 0x2000000) >> 24) + 2, 0x1Du, 0xDu);
        else
          MenuFillWindowRectWithBlankTile(0xEu, ((unsigned int)((v3 << 25) + 0x2000000) >> 24) + 2, 0x1Du, 0x11u);
      }
    }
    return 1;
  }
  return 0;
}
