int __fastcall sub_803AF78(int a1, _WORD *a2)
{
  int v2; // r7@1
  _WORD *v3; // r6@1
  int v4; // r0@1
  signed int v5; // r5@3
  _WORD *v6; // r4@3
  int v8; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *a2 = GetMonData(a1, 11);
  v4 = (unsigned __int16)GetMonData(v2, 12);
  if ( v4 == 175 )
    LOWORD(v4) = 0;
  v3[1] = v4;
  v5 = 0;
  v6 = v3 + 2;
  do
  {
    *v6 = GetMonData(v2, v5 + 13);
    ++v6;
    ++v5;
  }
  while ( v5 <= 3 );
  *((_BYTE *)v3 + 12) = GetMonData(v2, 56);
  *((_BYTE *)v3 + 13) = GetMonData(v2, 21);
  *((_DWORD *)v3 + 5) = GetMonData(v2, 1);
  *((_BYTE *)v3 + 14) = GetMonData(v2, 26);
  *((_BYTE *)v3 + 15) = GetMonData(v2, 27);
  *((_BYTE *)v3 + 16) = GetMonData(v2, 28);
  *((_BYTE *)v3 + 17) = GetMonData(v2, 29);
  *((_BYTE *)v3 + 18) = GetMonData(v2, 30);
  *((_BYTE *)v3 + 19) = GetMonData(v2, 31);
  *((_BYTE *)v3 + 43) = GetMonData(v2, 32);
  *((_BYTE *)v3 + 24) = *((_BYTE *)v3 + 24) & 0xE0 | GetMonData(v2, 39) & 0x1F;
  v3[12] = v3[12] & 0xFC1F | 32 * (GetMonData(v2, 40) & 0x1F);
  *((_BYTE *)v3 + 25) = *((_BYTE *)v3 + 25) & 0x83 | 4 * (GetMonData(v2, 41) & 0x1F);
  *((_DWORD *)v3 + 6) = *((_DWORD *)v3 + 6) & 0xFFF07FFF | ((GetMonData(v2, 42) & 0x1F) << 15);
  v3[13] = v3[13] & 0xFE0F | 16 * (GetMonData(v2, 43) & 0x1F);
  *((_BYTE *)v3 + 27) = *((_BYTE *)v3 + 27) & 0xC1 | 2 * (GetMonData(v2, 44) & 0x1F);
  *((_BYTE *)v3 + 27) = *((_BYTE *)v3 + 27) & 0x7F | ((unsigned __int8)GetMonData(v2, 46) << 7);
  *((_DWORD *)v3 + 7) = GetMonData(v2, 0);
  GetMonData(v2, 2);
  return v8;
}
