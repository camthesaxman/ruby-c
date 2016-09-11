signed int __fastcall sub_8071114(_WORD *a1, int a2)
{
  _WORD *v2; // r7@1
  int v3; // r6@1
  int v4; // r4@1
  unsigned int v5; // r5@1

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  v5 = (v4 << 25) + 0x2000000;
  while ( 1 )
  {
    MenuPrint(*(&gUnknown_08376D24 + 2 * *(_BYTE *)(v4 + 33745150)), 23, v5 >> 24);
    v5 += 0x2000000;
    if ( ++v4 >= v202E8FD )
      break;
    if ( !--v3 )
    {
      *v2 = v4;
      return 0;
    }
  }
  *v2 = v4;
  return 1;
}
