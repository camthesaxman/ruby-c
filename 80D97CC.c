int __fastcall sub_80D97CC(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    *(_BYTE *)(a1 + 5) = *(_BYTE *)(a1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C9) & 3);
    v2 = (_BYTE *)33748936;
  }
  else
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v2024C07, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v2024C07, 3u);
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C8) & 3);
    v2 = (_BYTE *)33748937;
  }
  *(_WORD *)(v1 + 60) = *v2;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 12;
  *(_WORD *)(v1 + 50) = 8;
  *(_DWORD *)(v1 + 28) = sub_80D986C;
  return v4;
}
