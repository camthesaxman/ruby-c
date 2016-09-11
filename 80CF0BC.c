int __fastcall sub_80CF0BC(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r5@4
  __int16 v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 0);
  v4 = sub_807A100(v3, 2u);
  *(_WORD *)(v1 + 34) = v4;
  if ( v4 <= 9 )
    *(_WORD *)(v1 + 34) = 10;
  *(_WORD *)(v1 + 46) = 1;
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = *(_BYTE *)(v1 + 67);
  *(_WORD *)(v1 + 52) = *(_BYTE *)(v1 + 67) + 4;
  *(_WORD *)(v1 + 54) = 0;
  oamt_set_x3A_32(v1, (int)sub_80CF138);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  return v6;
}
