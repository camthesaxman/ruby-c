int __fastcall sub_80CC474(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r6@4
  __int16 *v4; // r1@5
  signed __int16 v5; // r0@5
  signed int v6; // r0@7
  __int16 v7; // r0@14
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B0C )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  if ( battle_side_get_owner(*v2) << 24 )
  {
    *(_WORD *)(v1 + 54) = 0;
    v4 = word_3004B00;
    *(_WORD *)(v1 + 50) = word_3004B06;
    v5 = -16;
  }
  else
  {
    *(_WORD *)(v1 + 54) = 1;
    v4 = word_3004B00;
    *(_WORD *)(v1 + 50) = -word_3004B06;
    v5 = 256;
  }
  *(_WORD *)(v1 + 32) = v5;
  *(_WORD *)(v1 + 48) = v4[1];
  *(_WORD *)(v1 + 46) = v4[2];
  *(_WORD *)(v1 + 52) = v4[4];
  v6 = v4[5];
  if ( v6 == 1 )
  {
    *(_WORD *)(v1 + 34) = *v4;
_080CC54E:
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v3) + 1) & 3);
    goto _080CC56C;
  }
  if ( v6 <= 1 )
  {
    if ( v4[5] )
      goto _080CC56C;
    v7 = *v4;
    goto _080CC518;
  }
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
      goto _080CC56C;
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + *v4;
    obj_id_for_side_relative_to_move(1);
    goto _080CC54E;
  }
  v7 = (unsigned __int8)sub_8077ABC(v3, 3u) + *v4;
_080CC518:
  *(_WORD *)(v1 + 34) = v7;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v3) & 3);
_080CC56C:
  *(_DWORD *)(v1 + 28) = sub_80CC580;
  return v9;
}
