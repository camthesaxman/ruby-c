int __fastcall sub_80A4548(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  int i; // r8@1
  int v5; // r4@2
  unsigned int v6; // ST10_4@2
  int v7; // r5@2
  int v8; // r6@2
  int v9; // r7@2
  _WORD *v10; // r3@2
  unsigned __int16 v11; // r0@3
  _BYTE *v12; // r0@4
  int v13; // r6@4
  unsigned __int16 v14; // r0@4
  unsigned __int8 v16; // [sp+4h] [bp-30h]@1
  int v17; // [sp+8h] [bp-2Ch]@1
  int v18; // [sp+Ch] [bp-28h]@1
  int v19; // [sp+30h] [bp-4h]@0

  v17 = a3;
  v18 = a4;
  v16 = a1;
  for ( i = a2; i <= v17 && (unsigned __int8)sub_80A42B0(i, v18) != 1; i = (i + 1) & 0xFF )
  {
    v5 = ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + i) & 0xFF;
    v6 = (unsigned int)((i << 25) + 0x2000000) >> 24;
    v7 = 32 * v6 + 14;
    v8 = sub_80A425C(v16, (int)&gStringVar1, i);
    v9 = 4 * v5;
    v10 = (_WORD *)(4 * v5 + dword_3005D24);
    if ( (unsigned int)*v10 > 0x152 )
    {
      gBG2TilemapBuffer[v7] = 4189;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 15] = 4190;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 46] = 4205;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 47] = 4206;
      *(_BYTE *)v8 = -4;
      *(_BYTE *)(v8 + 1) = 19;
      *(_BYTE *)(v8 + 2) = 17;
      v12 = ConvertIntToDecimalString((_BYTE *)(v8 + 3), *(_WORD *)(v9 + dword_3005D24) - 338);
      *v12 = -4;
      v12[1] = 19;
      v12[2] = 24;
      v13 = (int)(v12 + 3);
      v14 = ItemIdToBattleMoveId(*(_WORD *)(v9 + dword_3005D24));
      sub_8072C74(v13, (int)&gMoveNames[13 * v14], 0x78u, 0);
    }
    else
    {
      gBG2TilemapBuffer[v7] = 89;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 15] = 79;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 46] = 105;
      gBG2TilemapBuffer[32 * ((unsigned int)((i << 25) + 0x2000000) >> 24) + 47] = 79;
      v11 = ItemIdToBattleMoveId(*v10);
      sub_80A41E0(
        v8,
        *(_WORD *)(v9 + dword_3005D24) - 288,
        (int)&gMoveNames[13 * v11],
        *(_WORD *)(v9 + dword_3005D24 + 2),
        2);
    }
    MenuPrint((int)&gStringVar1, 14, (unsigned int)((i << 25) + 0x2000000) >> 24);
  }
  return v19;
}
