int __fastcall sub_80D2D68(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r6@4
  __int16 v4; // r0@6
  signed int v5; // r0@6
  signed int v6; // r0@8
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  if ( (unsigned __int8)battle_side_get_owner(*v2) == 1 )
    word_3004B02 = -word_3004B02;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u) + word_3004B02;
  v4 = (unsigned __int8)sub_8077ABC(v3, 3u) + word_3004B04;
  *(_WORD *)(v1 + 34) = v4;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 8 * *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = 8 * v4;
  v5 = 8 * word_3004B02;
  if ( word_3004B02 & 0x10000000 )
    v5 += 7;
  *(_WORD *)(v1 + 52) = v5 >> 3;
  v6 = 8 * word_3004B04;
  if ( word_3004B04 & 0x10000000 )
    v6 += 7;
  *(_WORD *)(v1 + 54) = v6 >> 3;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16 * word_3004B06) & 0x3FF;
  *(_DWORD *)(v1 + 28) = sub_80D2E30;
  return v8;
}
