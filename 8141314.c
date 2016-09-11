int __fastcall sub_8141314(unsigned __int8 a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int v4; // r9@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r8@1
  int *v9; // r5@1

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = (unsigned __int8)CreateTask((int)sub_81413DC, 5);
  v9 = &dword_3004B20[10 * v8];
  *((_WORD *)v9 + 19) = v7;
  *((_WORD *)v9 + 7) = v6;
  *((_WORD *)v9 + 14) = v4;
  *((_WORD *)v9 + 15) = HIWORD(v4);
  if ( v5 )
  {
    BlendPalette((unsigned int)((v6 << 20) + 0x1000000) >> 16, 0x10u, 0x10u, gUnknown_0840B4D4[v7]);
    *((_WORD *)v9 + 4) = 16;
    *((_WORD *)v9 + 5) = -1;
    *v9 = (int)sub_814146C;
  }
  else
  {
    BlendPalette((unsigned int)((v6 << 20) + 0x1000000) >> 16, 0x10u, 0, gUnknown_0840B4D4[v7]);
    *((_WORD *)v9 + 5) = 1;
  }
  BeginNormalPaletteFade(v4, 0, 0, 0x10u, 0x7FFF);
  return v8;
}
