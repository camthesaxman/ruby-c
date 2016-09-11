int __fastcall sub_8130F5C(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = (_BYTE *)33748937;
  }
  else
  {
    sub_80787B0(a1, 1);
    v2 = (_BYTE *)33748936;
  }
  *(_WORD *)(v1 + 60) = *v2;
  if ( (unsigned __int8)battle_side_get_owner(*(_BYTE *)(v1 + 60)) == 1 )
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(*(_BYTE *)(v1 + 60)) & 3);
  *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 4;
  *(_DWORD *)(v1 + 28) = sub_8130FE0;
  return v4;
}
