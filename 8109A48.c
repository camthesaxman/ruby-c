int __fastcall sub_8109A48(unsigned __int8 a1)
{
  int v1; // r9@1
  int v2; // r6@1
  int v3; // r5@1
  unsigned int v4; // r4@1
  unsigned int v5; // r4@5
  int v7; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 1;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( *(_BYTE *)(v4 + 33719497) )
      v2 = (v2 + 1) & 0xFF;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 3 );
  MenuDrawTextWindow(0, 1u);
  v5 = 0;
  do
  {
    if ( *(_BYTE *)(v5 + 33719497) )
    {
      if ( (unsigned int)*(_BYTE *)(v5 + 33719497) <= 0x78 )
        MenuPrint((int)&asc_83EB6C5[32 * *(_BYTE *)(v5 + 33719497)], 1, (unsigned int)((v3 << 25) + 0x2000000) >> 24);
      else
        MenuPrint((int)&OtherText_FiveQuestions, 1, (unsigned int)((v3 << 25) + 0x2000000) >> 24);
      v3 = (v3 + 1) & 0xFF;
    }
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 3 );
  MenuPrint((int)&OtherText_Cancel2, 1, (unsigned int)((v3 << 25) + 0x2000000) >> 24);
  InitMenu(0, 1, 2, v2, 0, 11);
  HIWORD(dword_3004B20[10 * v1 + 2]) = v3;
  return v7;
}
