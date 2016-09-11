int __fastcall sub_80E3338(unsigned __int8 a1)
{
  int v1; // r9@1
  int v2; // r10@1
  signed __int16 *v3; // r1@1
  signed __int16 *v4; // r3@1
  signed int v5; // r2@1
  _BYTE *v6; // r0@4
  int v7; // r5@6
  int v8; // r8@6
  char *v9; // r2@17
  int v10; // r2@19
  int v11; // r0@20
  unsigned int *v12; // r1@20
  __int16 v13; // r5@23
  void *v14; // r0@31
  int *v15; // r2@47
  int v16; // r0@50
  signed __int16 v17; // r1@50
  int v18; // r1@52
  char v19; // r0@53
  char v20; // r0@54
  int v22; // [sp+0h] [bp-Ch]@25
  int v23; // [sp+4h] [bp-8h]@26
  unsigned __int8 v24; // [sp+8h] [bp-4h]@29
  signed __int16 v25; // [sp+Ch] [bp+0h]@1
  __int16 v26; // [sp+10h] [bp+4h]@3
  __int16 v27; // [sp+12h] [bp+6h]@7
  __int16 v28; // [sp+14h] [bp+8h]@49
  int v29; // [sp+1Ch] [bp+10h]@1
  int v30; // [sp+20h] [bp+14h]@1
  _BYTE savedregs[32]; // [sp+24h] [bp+18h]@55

  v1 = a1;
  v29 = 0;
  v30 = 0;
  v2 = 4 * a1;
  v3 = (signed __int16 *)&byte_3004B28[40 * a1];
  v4 = &v25;
  v5 = 7;
  do
  {
    *v4 = *v3;
    *v3 = 0;
    ++v3;
    ++v4;
    --v5;
  }
  while ( v5 >= 0 );
  if ( v26 )
    v6 = (_BYTE *)33748937;
  else
    v6 = (_BYTE *)33748936;
  v7 = *v6;
  v8 = v7 ^ 2;
  if ( sub_8076BE0() << 24 || v27 && !(b_side_obj__get_some_boolean(v7 ^ 2) << 24) )
    v27 = 0;
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000048 = 16191;
  v400004A = 16189;
  v4000000 |= 0x8000u;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A &= 0xFCu;
  v400000B &= 0x3Fu;
  v400000B |= 0x20u;
  if ( !(sub_8076BE0() << 24) )
    v400000A = v400000A & 0xF3 | 4;
  if ( battle_type_is_double() << 24
    && !v27
    && ((unsigned __int8)battle_get_per_side_status(v7) == 3 || !(battle_get_per_side_status(v7) << 24))
    && (unsigned __int8)b_side_obj__get_some_boolean(v7 ^ 2) == 1 )
  {
    v9 = &gSprites[68 * *(_BYTE *)((v7 ^ 2) + 0x2024BE0)];
    v9[5] = v9[5] & 0xF3 | 4 * ((((unsigned int)(unsigned __int8)v9[5] << 28 >> 30) - 1) & 3);
    v400000A = v400000A & 0xFC | 1;
    v30 = 1;
  }
  if ( !(sub_8076BE0() << 24) )
  {
    if ( battle_side_get_owner(v7) << 24 )
    {
      v11 = 25 * *(_WORD *)(2 * v7 + 0x2024A6A);
      v12 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v11 = 25 * *(_WORD *)(2 * v7 + 0x2024A6A);
      v12 = dword_3004360;
    }
    GetMonData((int)&v12[v11], 11, v10);
  }
  v13 = (unsigned __int8)sub_807A4A0(v7, *(_BYTE *)(v7 + 33704928));
  if ( v27 )
    v29 = sub_807A4A0(v8, *(_BYTE *)(v8 + 33704928)) & 0xFF;
  sub_8078914((int)&v22);
  if ( v25 )
    LZDecompressVram((int)&gBattleStatMask2_Tilemap, v23);
  else
    LZDecompressVram((int)&gBattleStatMask1_Tilemap, v23);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v24, v23, 0, 0);
  LZDecompressVram((int)&gBattleStatMask_Gfx, v22);
  if ( !*(&v25 + 1) )
  {
    v14 = &gBattleStatMask2_Pal;
_080E35FE:
    LoadCompressedPalette((int)v14, 16 * v24, 32);
    goto _080E361E;
  }
  if ( *(&v25 + 1) == 1 )
  {
    v14 = &gBattleStatMask1_Pal;
    goto _080E35FE;
  }
  if ( *(&v25 + 1) == 2 )
  {
    v14 = &gBattleStatMask3_Pal;
    goto _080E35FE;
  }
  if ( *(&v25 + 1) == 3 )
  {
    v14 = &gBattleStatMask4_Pal;
    goto _080E35FE;
  }
  if ( *(&v25 + 1) == 4 )
  {
    v14 = &gBattleStatMask6_Pal;
    goto _080E35FE;
  }
  if ( *(&v25 + 1) == 5 )
  {
    v14 = &gBattleStatMask7_Pal;
    goto _080E35FE;
  }
  if ( *(&v25 + 1) == 6 )
  {
    v14 = &gBattleStatMask8_Pal;
    goto _080E35FE;
  }
  LoadCompressedPalette((int)&gBattleStatMask5_Pal, 16 * v24, 32);
_080E361E:
  word_30042C0 = 0;
  word_30041B4 = 0;
  if ( v25 == 1 )
  {
    word_30042C0 = 64;
    v15 = dword_3004B20;
    HIWORD(dword_3004B20[2 * (v2 + v1) + 2]) = -3;
  }
  else
  {
    HIWORD(dword_3004B20[2 * (v2 + v1) + 2]) = 3;
    v15 = dword_3004B20;
  }
  if ( v28 )
  {
    v16 = (int)&v15[2 * (v2 + v1)];
    *(_WORD *)(v16 + 16) = 13;
    v17 = 30;
  }
  else
  {
    v16 = (int)&v15[2 * (v2 + v1)];
    *(_WORD *)(v16 + 16) = 10;
    v17 = 20;
  }
  *(_WORD *)(v16 + 18) = v17;
  v18 = (int)&v15[2 * (v2 + v1)];
  *(_WORD *)(v18 + 8) = v13;
  *(_WORD *)(v18 + 12) = v27;
  *(_WORD *)(v18 + 14) = v29;
  *(_WORD *)(v18 + 20) = v30;
  *(_WORD *)(v18 + 22) = *(_BYTE *)(v8 + 33704928);
  *(_DWORD *)v18 = sub_80E3704;
  if ( v25 )
  {
    v20 = sub_8077094(0xC0u);
    audio_play_and_stuff(0xF5u, v20);
  }
  else
  {
    v19 = sub_8077094(0xC0u);
    audio_play_and_stuff(0xEFu, v19);
  }
  return *(_DWORD *)&savedregs[28];
}
