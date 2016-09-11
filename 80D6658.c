int __fastcall sub_80D6658(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r6@4
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B06;
  if ( word_3004B0E & 0x8000 )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  if ( !(byte_3001BAD & 2) || !(battle_side_get_owner(*v2) << 24) )
    word_3004B00[0] = -word_3004B00[0];
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u) + word_3004B00[0];
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v3, 3u) + word_3004B02;
  *(_WORD *)(v1 + 54) = word_3004B0E & 0x7FFF;
  *(_WORD *)(v1 + 56) = word_3004B04;
  *(_WORD *)(v1 + 58) = word_3004B0A;
  *(_WORD *)(v1 + 60) = word_3004B08;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 4 * word_3004B0C) & 0x3FF;
  *(_DWORD *)(v1 + 28) = sub_80D672C;
  call_via_r1(v1, sub_80D672C);
  return v5;
}
