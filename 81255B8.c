signed int __fastcall sub_81255B8(unsigned __int16 a1, int a2)
{
  unsigned __int16 v2; // r6@1
  unsigned int v3; // r5@1
  int v4; // r0@1
  int v5; // r10@1
  unsigned int v6; // r3@1
  unsigned int v7; // r4@1
  int v8; // r1@3
  unsigned int i; // r4@3
  __int16 v10; // r0@5
  signed int v11; // r6@5
  unsigned int j; // r4@5
  char v13; // r1@11
  signed int v14; // r6@12
  unsigned int k; // r4@12

  v2 = a1;
  v3 = ((((a1 + (unsigned __int16)word_3005E9C) & 0xFFFFu) % 0xE & 0xFFFF) + 14 * (dword_3005EAC & 1)) & 0xFFFF;
  v4 = 8 * a1 + a2;
  v5 = *(_DWORD *)v4;
  v6 = *(_WORD *)(v4 + 4);
  v7 = 0;
  do
  {
    *(_BYTE *)(dword_3005EB0 + v7) = 0;
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 <= 0xFFF );
  v8 = dword_3005EB0;
  *(_WORD *)(dword_3005EB0 + 4084) = v2;
  *(_DWORD *)(v8 + 4088) = (char *)&08012024 + 1;
  *(_DWORD *)(v8 + 4092) = dword_3005EAC;
  for ( i = 0; i < v6; i = (i + 1) & 0xFFFF )
    *(_BYTE *)(dword_3005EB0 + i) = *(_BYTE *)(v5 + i);
  v10 = sub_8125C10(v5, v6);
  *(_WORD *)(dword_3005EB0 + 4086) = v10;
  call_via_r1(v3, EraseFlashSector);
  v11 = 1;
  for ( j = 0; j <= 0xFF7; j = (j + 1) & 0xFFFF )
  {
    if ( call_via_r3(v3, j, *(_BYTE *)(dword_3005EB0 + j), ProgramFlashByte) << 16 )
    {
      v11 = 255;
      break;
    }
  }
  if ( v11 == 255 )
  {
    v13 = v3;
  }
  else
  {
    v14 = 1;
    for ( k = 0; k <= 6; k = (k + 1) & 0xFFFF )
    {
      if ( call_via_r3(v3, k + 4089, *(_BYTE *)(k + dword_3005EB0 + 4089), ProgramFlashByte) << 16 )
      {
        v14 = 255;
        break;
      }
    }
    if ( v14 != 255 )
    {
      sub_81251D4(1, v3);
      return 1;
    }
    v13 = v3;
  }
  sub_81251D4(0, v13);
  return 255;
}
