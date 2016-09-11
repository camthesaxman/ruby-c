int __fastcall sub_812F314(unsigned __int8 a1)
{
  int *v1; // r4@1
  _BYTE *v2; // r0@2
  int v3; // r5@4
  int v4; // r0@6
  __int16 v5; // r5@9
  __int16 *v6; // r0@9
  __int16 v7; // r3@11
  unsigned int v8; // r7@11
  int v9; // r2@11
  int v10; // r1@12
  int v11; // r0@12
  int v12; // r0@12
  int v14; // [sp+0h] [bp-20h]@9
  int v15; // [sp+1Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B00[0] )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  v3 = *v2;
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 16;
  *((_WORD *)v1 + 8) = 0;
  *((_WORD *)v1 + 9) = v3;
  *((_WORD *)v1 + 10) = 32;
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 12) = 24;
  if ( (unsigned __int8)battle_side_get_owner(v3) == 1 )
    *((_WORD *)v1 + 12) = -*((_WORD *)v1 + 12);
  v4 = (unsigned __int8)sub_8077FC0(v3) - 34;
  *((_WORD *)v1 + 17) = v4;
  if ( v4 < 0 )
    *((_WORD *)v1 + 17) = 0;
  *((_WORD *)v1 + 18) = *((_WORD *)v1 + 17) + 66;
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v3) == 1 )
  {
    v14 = 67108884;
    v4000050 = 16194;
    v5 = word_30042C0;
    v6 = &word_30041B4;
  }
  else
  {
    v14 = 67108888;
    v4000050 = 16196;
    v5 = word_3004288;
    v6 = &word_3004280;
  }
  v7 = *v6;
  v8 = 0;
  LOWORD(v9) = 0;
  do
  {
    v10 = (signed __int16)v9;
    word_3004DE0[v10] = v5;
    word_3005560[v10] = v5;
    v11 = (signed __int16)v9 + 1;
    word_3004DE0[v11] = v7;
    word_3005560[v11] = v7;
    v12 = (v8 << 16) + 0x10000;
    v9 = ((signed __int16)v9 + 2) & 0xFFFF;
    v8 = (unsigned int)v12 >> 16;
  }
  while ( v12 >> 16 <= 159 );
  sub_80895F8(v14, -1503657983, 1);
  *v1 = (int)sub_812F474;
  return v15;
}
