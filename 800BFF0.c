int __fastcall dp01_prepare_buffer_wireless_probably(char a1, unsigned __int16 a2, int a3)
{
  int v3; // r10@1
  int v4; // r9@1
  int *v5; // r4@1
  signed int i; // r2@3
  int v8; // [sp+1Ch] [bp-4h]@0

  v3 = a3;
  v4 = (unsigned __int16)(a2 & 0xFFFC) + 4;
  v5 = &dword_3004B20[10 * v20238C4];
  if ( *((_WORD *)v5 + 18) + v4 + 9 > 4096 )
  {
    *((_WORD *)v5 + 16) = *((_WORD *)v5 + 18);
    LOWORD(dword_3004B20[10 * v20238C4 + 9]) = 0;
  }
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014000) = a1;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014001) = v2024A60;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014002) = v2024C07;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014003) = v2024C08;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014004) = v4;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014005) = (unsigned __int16)(v4 & 0xFF00) >> 8;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014006) = v2024C0C;
  *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + 0x2014007) = v2024C0A;
  for ( i = 0; i < a2; ++i )
    *(_BYTE *)(LOWORD(dword_3004B20[10 * v20238C4 + 9]) + i + 81928 + 0x2000000) = *(_BYTE *)(v3 + i);
  LOWORD(dword_3004B20[10 * v20238C4 + 9]) += v4 + 8;
  return v8;
}
