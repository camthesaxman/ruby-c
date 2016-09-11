int __fastcall sub_80E00EC(unsigned __int8 a1)
{
  int *v1; // r5@1
  __int16 v2; // r0@1
  __int16 v3; // r1@1
  __int16 v4; // r0@1
  signed __int16 v5; // r0@2
  int v6; // r0@4
  signed __int16 v7; // r7@5
  __int16 *v8; // r1@6
  unsigned int v9; // r3@10
  int v11; // [sp+0h] [bp-2Ch]@5
  int v12; // [sp+4h] [bp-28h]@10
  int v13; // [sp+8h] [bp-24h]@10
  char v14; // [sp+Ch] [bp-20h]@5
  unsigned __int8 v15; // [sp+14h] [bp-18h]@5
  int v16; // [sp+28h] [bp-4h]@12

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 11) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + 31;
  v2 = sub_807A100(v202F7C8, 2u) - 7;
  *((_WORD *)v1 + 10) = v2;
  v3 = *((_WORD *)v1 + 11);
  *((_WORD *)v1 + 9) = v3;
  *((_WORD *)v1 + 8) = v2;
  *((_WORD *)v1 + 17) = (v3 - v2) << 8;
  v4 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  *((_WORD *)v1 + 18) = v4 - 32;
  *((_WORD *)v1 + 19) = v4 + 32;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v5 = -64;
  else
    v5 = -12;
  *((_WORD *)v1 + 12) = v5;
  v6 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8);
  *((_WORD *)v1 + 7) = v6;
  if ( v6 == 1 )
  {
    sub_8078914((int)&v14);
    *((_WORD *)v1 + 14) = word_30041B4;
    v4000050 = 16194;
    FillPalette(0, 16 * v15, 32);
    v11 = 67108886;
    v7 = 2;
    if ( !(sub_8076BE0() << 24) )
    {
      v8 = &word_3004288;
_080E01EE:
      *v8 += 240;
      goto _080E01F4;
    }
  }
  else
  {
    *((_WORD *)v1 + 14) = word_3004280;
    v4000050 = 16196;
    FillPalette(0, 144, 32);
    v11 = 67108890;
    v7 = 4;
    if ( !(sub_8076BE0() << 24) )
    {
      v8 = &word_30042C0;
      goto _080E01EE;
    }
  }
_080E01F4:
  v12 = -1570766847;
  LOWORD(v13) = 1;
  *((_WORD *)v1 + 15) = 0;
  *((_WORD *)v1 + 16) = 16;
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  sub_80E08CC(3);
  v9 = 0;
  do
  {
    word_3004DE0[v9] = *((_WORD *)v1 + 14);
    word_3005560[v9] = *((_WORD *)v1 + 14);
    v9 = (v9 + 1) & 0xFFFF;
  }
  while ( v9 <= 0x6F );
  sub_80895F8(v11, v12, v13);
  v400004A = v7 ^ 0x3F | 0x3F00;
  v4000048 = 16191;
  word_30042C4 = (*((_WORD *)v1 + 18) << 8) | *((_WORD *)v1 + 19);
  word_3004240 = 160;
  *v1 = (int)sub_80E02A4;
  return v16;
}
