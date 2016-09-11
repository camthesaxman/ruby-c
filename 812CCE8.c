int __fastcall sub_812CCE8(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@2
  __int16 v3; // r0@4
  signed __int16 v4; // r3@4
  __int16 v5; // r4@4
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 0) + word_3004B02;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v2, 1u);
  v3 = word_3004B04;
  *(_WORD *)(v1 + 38) = word_3004B04;
  v4 = 0;
  v5 = word_3004B06;
  if ( v3 > word_3004B06 )
    v4 = 1;
  *(_WORD *)(v1 + 46) = v4;
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = word_3004B08;
  *(_WORD *)(v1 + 52) = word_3004B0A;
  *(_WORD *)(v1 + 54) = v5;
  *(_DWORD *)(v1 + 28) = sub_812CD64;
  return v7;
}
