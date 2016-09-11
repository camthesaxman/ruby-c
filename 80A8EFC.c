int __fastcall sub_80A8EFC(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r8@1
  int *v4; // r0@1
  unsigned __int8 *v5; // r0@2
  int *v6; // r2@7
  int v7; // r3@7
  int v8; // r1@9
  int v10; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move((unsigned __int8)word_3004B04);
  v3 = v2;
  sub_8078E70(v2, 0);
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 5) = 0;
  *((_WORD *)v4 + 6) = word_3004B00[0];
  if ( word_3004B04 )
    v5 = (unsigned __int8 *)33748937;
  else
    v5 = (unsigned __int8 *)33748936;
  if ( battle_side_get_owner(*v5) << 24 )
    word_3004B02 = -word_3004B02;
  if ( word_3004B06 == 1 )
  {
    HIWORD(dword_3004B20[10 * v1 + 3]) = word_3004B00[0] * word_3004B02;
    v6 = dword_3004B20;
    v7 = 4 * v1;
  }
  else
  {
    v6 = dword_3004B20;
    v7 = 4 * v1;
    HIWORD(dword_3004B20[10 * v1 + 3]) = 0;
  }
  v8 = (int)&v6[2 * (v7 + v1)];
  *(_WORD *)(v8 + 16) = word_3004B02;
  *(_WORD *)(v8 + 18) = v3;
  *(_WORD *)(v8 + 20) = word_3004B06;
  *(_WORD *)(v8 + 22) = 1;
  *(_WORD *)(v8 + 14) = -*(_WORD *)(v8 + 14);
  *(_WORD *)(v8 + 16) = -*(_WORD *)(v8 + 16);
  *(_DWORD *)v8 = sub_80A8FD8;
  return v10;
}
