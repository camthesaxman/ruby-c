int __fastcall sub_80A8E04(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r8@1
  int *v4; // r2@1
  int *v5; // r5@4
  unsigned __int8 *v6; // r0@7
  int v7; // r0@9
  signed __int16 v8; // r1@9
  int *v9; // r4@12
  int v11; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move((unsigned __int8)word_3004B04);
  v3 = v2;
  sub_8078E70(v2, 0);
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 5) = 0;
  *((_WORD *)v4 + 6) = word_3004B00[0];
  if ( word_3004B06 == 1 )
    *((_WORD *)v4 + 7) = word_3004B00[0] * word_3004B02;
  else
    *((_WORD *)v4 + 7) = 0;
  v5 = &dword_3004B20[10 * v1];
  *((_WORD *)v5 + 8) = word_3004B02;
  *((_WORD *)v5 + 9) = v3;
  *((_WORD *)v5 + 10) = word_3004B06;
  if ( sub_8076BE0() << 24 )
  {
    *((_WORD *)v5 + 11) = 1;
  }
  else
  {
    if ( word_3004B04 )
      v6 = (unsigned __int8 *)33748937;
    else
      v6 = (unsigned __int8 *)33748936;
    v7 = battle_side_get_owner(*v6);
    v8 = 0;
    if ( !(v7 << 24) )
      v8 = 1;
    *((_WORD *)v5 + 11) = v8;
  }
  v9 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v9 + 11) && !(sub_8076BE0() << 24) )
  {
    *((_WORD *)v9 + 7) = -*((_WORD *)v9 + 7);
    *((_WORD *)v9 + 8) = -*((_WORD *)v9 + 8);
  }
  dword_3004B20[10 * v1] = (int)sub_80A8FD8;
  return v11;
}
