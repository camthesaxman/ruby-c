int __fastcall sub_80CC914(int a1)
{
  int v1; // r5@1
  __int16 v2; // r1@6
  __int16 v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u);
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
  v2 = *(_WORD *)(v1 + 48) - 1024;
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) += 1024;
  v3 = word_3004B04;
  *(_WORD *)(v1 + 56) = word_3004B04;
  if ( v3 == 1 )
    *(_WORD *)(v1 + 48) = -v2;
  return v5;
}
