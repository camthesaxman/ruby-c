int __fastcall sub_80FE528(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r5@1
  int *v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(0, 0);
  v2 = 0;
  v3 = &dword_3004B20[10 * v1];
  do
  {
    if ( v201F009 != 1 || *((_WORD *)v3 + 15) || v2 == 6 || v2 == 7 )
      sub_80FE470(v2, 1, 2 * v2 + 1, -1);
    else
      sub_80FE470(v2, 1, 2 * v2 + 1, 13);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  MenuPrint((int)&UnknownText_Exit, 1, 0x11u);
  return v5;
}
