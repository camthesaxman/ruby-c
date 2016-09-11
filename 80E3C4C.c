int __fastcall sub_80E3C4C(unsigned __int8 a1, int a2, unsigned __int16 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9, int a10, int a11)
{
  int v11; // r9@1
  int v12; // r7@1
  int v13; // r8@1
  int v14; // r6@1
  int v15; // r2@8
  int v16; // r0@9
  unsigned int *v17; // r1@9
  __int16 v18; // r7@12
  int *v19; // r0@16
  int v21; // [sp+0h] [bp-3Ch]@14
  int v22; // [sp+4h] [bp-38h]@14
  unsigned __int8 v23; // [sp+8h] [bp-34h]@15
  int v24; // [sp+Ch] [bp-30h]@1
  int v25; // [sp+10h] [bp-2Ch]@1
  int v26; // [sp+14h] [bp-28h]@1
  int v27; // [sp+18h] [bp-24h]@1
  int v28; // [sp+38h] [bp-4h]@16

  v11 = a1;
  v24 = a3;
  v12 = a4;
  v13 = a5;
  v25 = a6;
  v26 = a7;
  v27 = 0;
  v14 = a4 ^ 2;
  if ( sub_8076BE0() << 24 || a5 && !(b_side_obj__get_some_boolean(v14) << 24) )
    v13 = 0;
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
  if ( !(sub_8076BE0() << 24) )
  {
    if ( battle_side_get_owner(v12) << 24 )
    {
      v16 = 25 * *(_WORD *)(2 * v12 + 0x2024A6A);
      v17 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v16 = 25 * *(_WORD *)(2 * v12 + 0x2024A6A);
      v17 = dword_3004360;
    }
    GetMonData((int)&v17[v16], 11, v15);
  }
  v18 = (unsigned __int8)sub_807A4A0(v12, *(_BYTE *)(v12 + 33704928));
  if ( v13 )
    v27 = sub_807A4A0(v14, *(_BYTE *)(v14 + 33704928)) & 0xFF;
  sub_8078914((int)&v21);
  LZDecompressVram(a10, v22);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v23, v22, 0, 0);
  LZDecompressVram(a9, v21);
  LoadCompressedPalette(a11, 16 * v23, 32);
  word_30042C0 = 0;
  word_30041B4 = 0;
  v19 = &dword_3004B20[10 * v11];
  *((_WORD *)v19 + 5) = v24;
  *((_WORD *)v19 + 8) = v25;
  *((_WORD *)v19 + 9) = a8;
  *((_WORD *)v19 + 10) = v26;
  *((_WORD *)v19 + 4) = v18;
  *((_WORD *)v19 + 6) = v13;
  *((_WORD *)v19 + 7) = v27;
  *v19 = (int)sub_80E3E64;
  return v28;
}
