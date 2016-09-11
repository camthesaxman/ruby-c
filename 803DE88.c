int __fastcall battle_data_fill(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r9@1
  char *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  signed int v6; // r6@1
  _BYTE *v7; // r7@1
  int v8; // r5@3
  int v9; // r7@3
  signed int v10; // r6@3
  _BYTE *v11; // r0@3
  int v13; // [sp+0h] [bp-38h]@3
  int v14; // [sp+14h] [bp-24h]@1
  int v15; // [sp+34h] [bp-4h]@5

  v14 = a1;
  v2 = a2;
  v3 = (char *)&unk_3004360 + 100 * a2;
  v4 = 88 * v14;
  v5 = 88 * a1 + 33704576;
  *(_WORD *)(88 * v14 + 0x2024A80) = GetMonData((int)v3, 11, 0);
  *(_WORD *)(v5 + 46) = GetMonData((int)v3, 12, 0);
  v6 = 0;
  v7 = (_BYTE *)(v4 + 33704612);
  do
  {
    *(_WORD *)(v4 + 33704588) = GetMonData((int)v3, v6 + 13, 0);
    *v7++ = GetMonData((int)v3, v6 + 17, 0);
    v4 += 2;
    ++v6;
  }
  while ( v6 <= 3 );
  v8 = 88 * v14;
  v9 = 88 * v14 + 33704576;
  *(_BYTE *)(88 * v14 + 0x2024ABB) = GetMonData((int)&unk_3004360 + 100 * v2, 21, 0);
  *(_BYTE *)(v9 + 43) = GetMonData((int)&unk_3004360 + 100 * v2, 32, 0);
  *(_DWORD *)(v8 + 33704644) = GetMonData((int)&unk_3004360 + 100 * v2, 25, 0);
  *(_BYTE *)(v9 + 20) = *(_BYTE *)(v9 + 20) & 0xE0 | GetMonData((int)&unk_3004360 + 100 * v2, 39, 0) & 0x1F;
  *(_WORD *)(v9 + 20) = *(_WORD *)(v9 + 20) & 0xFC1F | 32 * (GetMonData((int)&unk_3004360 + 100 * v2, 40, 0) & 0x1F);
  *(_BYTE *)(v9 + 21) = *(_BYTE *)(v9 + 21) & 0x83 | 4 * (GetMonData((int)&unk_3004360 + 100 * v2, 41, 0) & 0x1F);
  *(_DWORD *)(v9 + 20) = *(_DWORD *)(v9 + 20) & 0xFFF07FFF | ((GetMonData((int)&unk_3004360 + 100 * v2, 42, 0) & 0x1F) << 15);
  *(_WORD *)(v9 + 22) = *(_WORD *)(v9 + 22) & 0xFE0F | 16 * (GetMonData((int)&unk_3004360 + 100 * v2, 43, 0) & 0x1F);
  *(_BYTE *)(v9 + 23) = *(_BYTE *)(v9 + 23) & 0xC1 | 2 * (GetMonData((int)&unk_3004360 + 100 * v2, 44, 0) & 0x1F);
  *(_DWORD *)(v8 + 33704648) = GetMonData((int)&unk_3004360 + 100 * v2, 0, 0);
  *(_DWORD *)(v8 + 33704652) = GetMonData((int)&unk_3004360 + 100 * v2, 55, 0);
  *(_BYTE *)(v9 + 42) = GetMonData((int)&unk_3004360 + 100 * v2, 56, 0);
  *(_WORD *)(v9 + 40) = GetMonData((int)&unk_3004360 + 100 * v2, 57, 0);
  *(_WORD *)(v9 + 44) = GetMonData((int)&unk_3004360 + 100 * v2, 58, 0);
  *(_WORD *)(v9 + 2) = GetMonData((int)&unk_3004360 + 100 * v2, 59, 0);
  *(_WORD *)(v9 + 4) = GetMonData((int)&unk_3004360 + 100 * v2, 60, 0);
  *(_WORD *)(v9 + 6) = GetMonData((int)&unk_3004360 + 100 * v2, 61, 0);
  *(_WORD *)(v9 + 8) = GetMonData((int)&unk_3004360 + 100 * v2, 62, 0);
  *(_WORD *)(v9 + 10) = GetMonData((int)&unk_3004360 + 100 * v2, 63, 0);
  *(_BYTE *)(v9 + 23) = *(_BYTE *)(v9 + 23) & 0xBF | ((GetMonData((int)&unk_3004360 + 100 * v2, 45, 0) & 1) << 6);
  *(_BYTE *)(v9 + 23) = *(_BYTE *)(v9 + 23) & 0x7F | ((unsigned __int8)GetMonData((int)&unk_3004360 + 100 * v2, 46, 0) << 7);
  *(_DWORD *)(v8 + 33704660) = GetMonData((int)&unk_3004360 + 100 * v2, 1, 0);
  *(_BYTE *)(v9 + 33) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)v9 + 6);
  *(_BYTE *)(v9 + 34) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)v9 + 7);
  *(_BYTE *)(v9 + 32) = sub_803DB14(*(_WORD *)v9, (unsigned int)*(_BYTE *)(v9 + 23) >> 7);
  GetMonData((int)&unk_3004360 + 100 * v2, 2, (int)&v13);
  StringCopy10(v8 + 33704624, (int)&v13);
  GetMonData((int)&unk_3004360 + 100 * v2, 7, v8 + 33704636);
  *(_WORD *)((2 * battle_side_get_owner(v14) & 0x1FF) + 0x20160BC) = *(_WORD *)(v9 + 40);
  v10 = 7;
  v11 = (_BYTE *)(v8 + 33704607);
  do
  {
    *v11-- = 6;
    --v10;
  }
  while ( v10 >= 0 );
  *(_DWORD *)(88 * v14 + 0x2024AD0) = 0;
  sub_80157C4(v14);
  sub_8032AA8(v14, 0);
  return v15;
}
