int __fastcall sub_80413C8(int a1, int a2, _BYTE *a3)
{
  int v3; // r7@1
  int v4; // r8@1
  unsigned int v5; // r0@1
  unsigned int v6; // r4@1
  unsigned int v7; // r9@1
  int v8; // r4@2
  int v9; // r2@2
  unsigned __int8 v10; // r0@2
  int v11; // r4@2
  int v12; // r2@2
  int v13; // r3@2
  int v14; // r2@2
  int v15; // r3@2
  int v16; // r2@2
  int v17; // r3@2
  int v18; // r0@3
  int v20; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = daycare_empty_slot(a2, a2, a3) << 24;
  v6 = v5 >> 24;
  v7 = v5 >> 24;
  if ( sub_80A2B94(v3) << 24 )
  {
    v8 = 56 * (char)v6;
    StringCopy((_BYTE *)(v8 + 160 + v4 + 36), (_BYTE *)0x2024EA4);
    sub_814A518(v8 + 160 + v4 + 36, 252);
    pokemon_get_nick(v3, v8 + 160 + v4 + 44);
    v10 = GetMonData(v3, 64, v9);
    v11 = v8 + v4 + 160;
    v12 = *(_DWORD *)(36 * v10 + 0x2028284);
    v13 = *(_DWORD *)(36 * v10 + 0x2028288);
    *(_DWORD *)v11 = *(_DWORD *)(36 * v10 + 0x2028280);
    *(_DWORD *)(v11 + 4) = v12;
    *(_DWORD *)(v11 + 8) = v13;
    v11 += 12;
    v14 = *(_DWORD *)(36 * v10 + 0x2028290);
    v15 = *(_DWORD *)(36 * v10 + 0x2028294);
    *(_DWORD *)v11 = *(_DWORD *)(36 * v10 + 0x202828C);
    *(_DWORD *)(v11 + 4) = v14;
    *(_DWORD *)(v11 + 8) = v15;
    v11 += 12;
    v16 = *(_DWORD *)(36 * v10 + 0x202829C);
    v17 = *(_DWORD *)(36 * v10 + 0x20282A0);
    *(_DWORD *)v11 = *(_DWORD *)(36 * v10 + 0x2028298);
    *(_DWORD *)(v11 + 4) = v16;
    *(_DWORD *)(v11 + 8) = v17;
    sub_80A2DF8(v3, 36 * v10 + 33718948);
  }
  memcpy(80 * (char)v7 + v4, v3, 80);
  pokemon_restore_pp((unsigned int *)(80 * (char)v7 + v4));
  *(_DWORD *)(v4 + 272 + 4 * (char)v7) = 0;
  v18 = ZeroMonData(v3);
  party_compaction(v18);
  calc_player_party_count();
  return v20;
}
