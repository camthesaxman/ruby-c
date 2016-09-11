int __fastcall sub_80E9620(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r10@1
  int v3; // r7@1
  int i; // r9@1
  unsigned int v5; // r6@2
  int j; // r8@2
  int v7; // r0@4
  unsigned int v9; // [sp+14h] [bp-2Ch]@1
  int v10; // [sp+3Ch] [bp-4h]@0

  v9 = a2;
  v2 = 0;
  v3 = a1;
  for ( i = 0; i < v2001084; i = (i + 1) & 0xFFFF )
  {
    v5 = v9;
    for ( j = 0; j < v2001083; j = (j + 1) & 0xFFFF )
    {
      if ( v2 >= v200100A )
      {
        MenuPrint((int)&gUnknown_083DBEA8, v5, v3);
        break;
      }
      if ( *(_WORD *)(2 * v2 + 0x200100C) == 0xFFFF )
      {
        sub_8095C8C(100691968, v5, v3, (int)gUnknown_083DBE1C, 0, 0, 9, 2u, 9u);
        LOWORD(v7) = v5 + 11;
      }
      else
      {
        sub_80EB218(33598996, *(_WORD *)(2 * v2 + 0x200100C), 11);
        MenuPrint(33598996, v5, v3);
        v7 = v5 + 11 + *(_BYTE *)(2 * i + j + 33558668);
      }
      v5 = (unsigned __int16)v7;
      v2 = (v2 + 1) & 0xFFFF;
    }
    v3 = (v3 + 2) & 0xFFFF;
  }
  return v10;
}
