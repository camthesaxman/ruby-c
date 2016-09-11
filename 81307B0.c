int __fastcall sub_81307B0(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r5@4
  signed __int16 v4; // r1@4
  __int16 v5; // r0@7
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16) & 0x3FF;
  *(_WORD *)(v1 + 58) = word_3004B04;
  v4 = 1;
  if ( !word_3004B02 )
    v4 = -1;
  *(_WORD *)(v1 + 60) = v4;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v3, 3u);
  if ( word_3004B02 )
  {
    v5 = sub_807A100(v3, 5u) + 8;
  }
  else
  {
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27) | 8);
    v5 = sub_807A100(v3, 4u) - 8;
  }
  *(_WORD *)(v1 + 32) = v5;
  *(_DWORD *)(v1 + 28) = sub_813085C;
  return v7;
}
