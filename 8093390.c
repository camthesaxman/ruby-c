int __fastcall sub_8093390(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  signed int v3; // r0@3
  unsigned __int16 v4; // r0@3
  char v5; // r4@7
  unsigned int v6; // r2@9
  unsigned int v7; // r2@11
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)a1 = v2024EAC;
  *(_WORD *)(a1 + 16) = v2024EB2;
  *(_WORD *)(a1 + 18) = v2024EB4;
  v2 = sub_8053108(1u);
  if ( !sub_8053108(0xAu) )
    v2 = 0;
  *(_WORD *)(v1 + 6) = HIWORD(v2);
  *(_WORD *)(v1 + 8) = BYTE1(v2);
  *(_WORD *)(v1 + 10) = (unsigned __int8)v2;
  *(_BYTE *)(v1 + 2) = FlagGet(0x801u);
  v3 = sub_8090FC0();
  *(_BYTE *)(v1 + 3) = v3;
  *(_WORD *)(v1 + 12) = GetPokedexSeenCount(v3);
  *(_WORD *)(v1 + 14) = v2024EAE | (unsigned __int16)(v2024EAF << 8);
  *(_WORD *)(v1 + 20) = sav12_xor_get_clamped_above(23, 9999);
  *(_WORD *)(v1 + 22) = sav12_xor_get_clamped_above(24, 9999);
  *(_WORD *)(v1 + 28) = sav12_xor_get_clamped_above(35, 999);
  *(_WORD *)(v1 + 30) = sav12_xor_get_clamped_above(34, 0xFFFF);
  *(_WORD *)(v1 + 32) = sav12_xor_get_clamped_above(21, 0xFFFF);
  v4 = v2025414;
  *(_WORD *)(v1 + 24) = v2025414;
  *(_WORD *)(v1 + 26) = v2025416;
  if ( v4 > 0x270Fu )
    *(_WORD *)(v1 + 24) = 9999;
  if ( (unsigned int)*(_WORD *)(v1 + 26) > 0x270F )
    *(_WORD *)(v1 + 26) = 9999;
  v5 = 0;
  if ( (sub_80C4D50() & 0xFFu) > 4 )
    v5 = 1;
  *(_BYTE *)(v1 + 4) = v5;
  *(_DWORD *)(v1 + 36) = v2025BC4;
  v6 = 0;
  do
  {
    *(_WORD *)(v1 + 40 + 2 * v6) = *(_WORD *)(2 * v6 + 0x2028250);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  v7 = 0;
  do
  {
    *(_BYTE *)(v1 + 48 + v7) = *(_BYTE *)(v7 + 33705636);
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 7 );
  *(_BYTE *)(v1 + 1) = sub_80934F4(v1);
  return v9;
}
