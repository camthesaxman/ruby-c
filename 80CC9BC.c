int __fastcall sub_80CC9BC(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r7@5
  unsigned __int8 v3; // r0@5
  unsigned int v4; // r4@6
  __int16 v5; // r1@15
  __int16 v6; // r0@15
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B06 == 1 )
  {
    v2 = sub_8077ABC(v202F7C9 ^ 2, 0) & 0xFF;
    v3 = v202F7C9 ^ 2;
_080CCA68:
    v4 = sub_8077ABC(v3, 1u) & 0xFF;
    goto _080CCA72;
  }
  if ( word_3004B06 <= 1 || word_3004B06 != 2 )
  {
    v2 = sub_8077ABC(v202F7C9, 0) & 0xFF;
    v3 = v202F7C9;
    goto _080CCA68;
  }
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  v4 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u);
  if ( b_side_obj__get_some_boolean(v202F7C9 ^ 2) << 24 )
  {
    v2 = ((unsigned __int8)sub_8077ABC(v202F7C9 ^ 2, 0) + v2) >> 1;
    v4 = ((unsigned __int8)sub_8077ABC(v202F7C9 ^ 2, 1u) + v4) >> 1;
  }
_080CCA72:
  *(_WORD *)(v1 + 32) = v2;
  *(_WORD *)(v1 + 34) = v4;
  if ( !(battle_side_get_owner(v202F7C9) << 24) )
    *(_WORD *)(v1 + 34) += 8;
  *(_DWORD *)(v1 + 28) = sub_80CCB00;
  if ( word_3004B04 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    *(_BYTE *)(v1 + 63) |= 1u;
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
  }
  *(_WORD *)(v1 + 34) += word_3004B02;
  v5 = *(_WORD *)(v1 + 48) - 1024;
  *(_WORD *)(v1 + 48) = v5;
  *(_WORD *)(v1 + 50) += 1024;
  v6 = word_3004B04;
  *(_WORD *)(v1 + 56) = word_3004B04;
  if ( v6 == 1 )
    *(_WORD *)(v1 + 48) = -v5;
  return v8;
}
