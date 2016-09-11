int __fastcall sub_80DE7B8(int a1)
{
  int v1; // r7@1
  int v2; // r6@2
  unsigned int v3; // r5@2
  unsigned __int8 *v4; // r4@2
  int v5; // r10@4
  int v6; // r0@4
  int v8; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
    v3 = (((sub_8077ABC(v202F7C9, 1u) << 16) & 0xFFFFFFu) + 1835008) >> 16;
    v4 = (unsigned __int8 *)33748936;
  }
  else
  {
    v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
    v3 = (((sub_8077ABC(v202F7C8, 1u) << 16) & 0xFFFFFFu) + 1835008) >> 16;
    v4 = (unsigned __int8 *)33748937;
  }
  v5 = (unsigned __int8)sub_8077ABC(*v4, 0);
  v6 = sub_8077ABC(*v4, 1u);
  *(_WORD *)(v1 + 46) = 16 * v2;
  *(_WORD *)(v1 + 48) = 16 * v3;
  *(_WORD *)(v1 + 50) = 16 * (v5 - v2) / word_3004B02;
  *(_WORD *)(v1 + 52) = ((signed int)((((((v6 << 16) & 0xFFFFFFu) + 1835008) >> 16) - v3) << 16) >> 12) / word_3004B02;
  *(_WORD *)(v1 + 54) = word_3004B02;
  *(_WORD *)(v1 + 56) = v5;
  *(_WORD *)(v1 + 58) = (((v6 << 16) & 0xFFFFFFu) + 1835008) >> 16;
  *(_WORD *)(v1 + 60) = *(_WORD *)(v1 + 54) / 2;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 8;
  *(_WORD *)(v1 + 32) = v2;
  *(_WORD *)(v1 + 34) = v3;
  *(_DWORD *)(v1 + 28) = sub_80DE8D8;
  *(_BYTE *)(v1 + 62) |= 4u;
  return v8;
}
