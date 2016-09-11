int __fastcall sub_80E2F2C(unsigned __int8 a1)
{
  int v1; // r9@1
  signed __int16 v2; // r7@1
  char *v3; // r2@8
  int v4; // r2@10
  int v5; // r0@11
  unsigned int *v6; // r1@11
  unsigned __int8 v7; // r0@14
  int v8; // r5@14
  __int16 v9; // r4@14
  char *v10; // r1@16
  int *v11; // r0@16
  int v13; // [sp+0h] [bp-2Ch]@14
  int v14; // [sp+4h] [bp-28h]@14
  unsigned __int8 v15; // [sp+8h] [bp-24h]@15
  int v16; // [sp+Ch] [bp-20h]@14
  int v17; // [sp+28h] [bp-4h]@16

  v1 = a1;
  v2 = 0;
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000048 = 16191;
  v400004A = 16189;
  v4000000 |= 0x8000u;
  v4000050 = 16194;
  v4000052 = 3080;
  v400000A &= 0xFCu;
  v400000B &= 0x3Fu;
  v400000B |= 0x20u;
  if ( !(sub_8076BE0() << 24) )
    v400000A = v400000A & 0xF3 | 4;
  if ( battle_type_is_double() << 24
    && !(sub_8076BE0() << 24)
    && ((unsigned __int8)battle_get_per_side_status(v202F7C8) == 3 || !(battle_get_per_side_status(v202F7C8) << 24))
    && (unsigned __int8)b_side_obj__get_some_boolean(v202F7C8 ^ 2) == 1 )
  {
    v3 = &gSprites[68 * *(_BYTE *)((v202F7C8 ^ 2) + 0x2024BE0)];
    v3[5] = v3[5] & 0xF3 | 4 * ((((unsigned int)(unsigned __int8)v3[5] << 28 >> 30) - 1) & 3);
    v400000A = v400000A & 0xFC | 1;
    v2 = 1;
  }
  if ( !(sub_8076BE0() << 24) )
  {
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      v5 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
      v6 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v5 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
      v6 = dword_3004360;
    }
    GetMonData((int)&v6[v5], 11, v4);
  }
  v7 = obj_id_for_side_relative_to_move(0);
  v8 = v7;
  v9 = (unsigned __int8)sub_807A4A0(v202F7C8, v7);
  sub_8078914((int)&v13);
  v16 = 0;
  v40000D4 = &v16;
  v40000D8 = v14;
  v40000DC = -2063596544;
  LZDecompressVram((int)&gUnknown_08D20A30, v14);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v15, v14, 0, 0);
  LZDecompressVram((int)&gUnknown_08D20A14, v13);
  LoadPalette((int)&gUnknown_083DB568, 16 * v15 + 1, 2);
  v10 = &gSprites[68 * v8];
  word_30042C0 = 32 - *((_WORD *)v10 + 16);
  word_30041B4 = 32 - *((_WORD *)v10 + 17);
  v11 = &dword_3004B20[10 * v1];
  *((_WORD *)v11 + 4) = v9;
  *((_WORD *)v11 + 10) = v2;
  *v11 = (int)sub_80E3194;
  return v17;
}
