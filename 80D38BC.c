int __fastcall sub_80D38BC(unsigned __int8 a1)
{
  int v1; // r10@1
  int v2; // r2@1
  unsigned int v3; // r3@1
  void *v4; // r0@5
  int *v5; // r6@12
  int v6; // r8@12
  int *v7; // r7@12
  int *v8; // r2@17
  signed __int16 v9; // r0@18
  int *v10; // r0@20
  int v12; // [sp+0h] [bp-34h]@1
  int v13; // [sp+4h] [bp-30h]@3
  unsigned __int8 v14; // [sp+8h] [bp-2Ch]@8
  char v15; // [sp+Ch] [bp-28h]@3
  int v16; // [sp+10h] [bp-24h]@2
  int v17; // [sp+30h] [bp-4h]@20

  v1 = a1;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A = v400000A & 0xFC | 1;
  v400000B = v400000B & 0x3F | 0x40;
  sub_8078914((int)&v12);
  v2 = v12;
  v3 = 0x2000;
  do
  {
    v16 = 0;
    v40000D4 = &v16;
    v40000D8 = v2;
    v40000DC = -2063596544;
    v2 += 4096;
    v3 -= 4096;
  }
  while ( v3 > 0x1000 );
  v15 = 0;
  v16 = 0;
  v40000D4 = &v16;
  v40000D8 = v13;
  v40000DC = -2063596544;
  if ( sub_8076BE0() << 24 )
  {
    LZDecompressVram((int)&gUnknown_08E70F0C, v13);
    sub_80763FC(v14, v13, 0, 1);
  }
  else
  {
    v400000A = v400000A & 0xF3 | 4;
    if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
      v4 = &gUnknown_08E70968;
    else
      v4 = &gUnknown_08E70C38;
    LZDecompressVram((int)v4, v13);
  }
  LZDecompressVram((int)&gBattleAnimBackgroundImage_Surf, v12);
  if ( word_3004B00[0] )
    LoadCompressedPalette((int)&gBattleAnimBackgroundImageMuddyWater_Pal, 16 * v14, 32);
  else
    LoadCompressedPalette((int)&gBattleAnimBackgroundPalette_Surf, 16 * v14, 32);
  v5 = &dword_3004B20[10 * v1];
  v6 = (unsigned __int8)CreateTask((int)sub_80D3D68, *((_BYTE *)v5 + 7) + 1);
  *((_WORD *)v5 + 19) = v6;
  v7 = &dword_3004B20[10 * v6];
  *((_WORD *)v7 + 4) = 0;
  *((_WORD *)v7 + 5) = 4096;
  *((_WORD *)v7 + 6) = 4096;
  if ( (unsigned __int8)sub_8076BE0() )
  {
    word_30042C0 = -80;
    word_30041B4 = -48;
    *((_WORD *)v5 + 4) = 2;
    *((_WORD *)v5 + 5) = 1;
    *((_WORD *)v7 + 7) = 0;
  }
  else if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
  {
    word_30042C0 = -224;
    word_30041B4 = 256;
    *((_WORD *)v5 + 4) = 2;
    *((_WORD *)v5 + 5) = -1;
    *((_WORD *)v7 + 7) = 1;
  }
  else
  {
    word_30042C0 = 0;
    word_30041B4 = -48;
    *((_WORD *)v5 + 4) = -2;
    *((_WORD *)v5 + 5) = 1;
    *((_WORD *)v7 + 7) = 0;
  }
  v4000014 = word_30042C0;
  v4000016 = word_30041B4;
  v8 = &dword_3004B20[10 * v6];
  if ( *((_WORD *)v8 + 7) )
  {
    v9 = 0;
    *((_WORD *)v8 + 8) = 0;
  }
  else
  {
    *((_WORD *)v8 + 8) = 48;
    v9 = 112;
  }
  *((_WORD *)v8 + 9) = v9;
  v10 = &dword_3004B20[10 * v1];
  *((_WORD *)v10 + 10) = 1;
  *v10 = (int)sub_80D3B60;
  return v17;
}
