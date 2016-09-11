int __fastcall sub_8130A2C(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 2u);
  *(_WORD *)(v1 + 34) = sub_807A100(*v2, 2u);
  if ( (signed int)*(_WORD *)(v1 + 34) <= 7 )
    *(_WORD *)(v1 + 34) = 8;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_8130A94;
  return v4;
}
