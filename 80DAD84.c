int __fastcall sub_80DAD84(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v3; // r3@9
  unsigned int v4; // r6@9
  __int16 v5; // r0@9
  char v6; // r7@9
  int v7; // r1@11
  __int16 v8; // r0@11
  __int16 *v9; // r2@11
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = word_3004B00[0];
  *(_WORD *)(a1 + 50) = word_3004B02;
  *(_WORD *)(a1 + 52) = word_3004B04;
  if ( byte_3001BAD & 2 )
  {
    if ( *(_BYTE *)(v202F7C9 + 0x2024A72) & 1 )
      v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + word_3004B06;
    else
      v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + 40;
    *(_WORD *)(v1 + 60) = v2;
    if ( word_3004B08 )
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v202F7C9) + 1) & 3);
    else
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C9) & 3);
  }
  else
  {
    *(_WORD *)(a1 + 60) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + word_3004B06;
  }
  v3 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 54) = gSineTable[(unsigned __int8)v3];
  *(_WORD *)(v1 + 56) = -gSineTable[(unsigned __int8)v3 + 64];
  *(_WORD *)(v1 + 58) = 0;
  *(_WORD *)(v1 + 38) = 0;
  *(_WORD *)(v1 + 36) = 0;
  v4 = (unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27;
  *(_WORD *)(v1 + 48) = (unsigned int)(v3 << 16) >> 24;
  v5 = Random();
  v6 = v5;
  if ( v5 & 0x8000 )
    *(_WORD *)(v1 + 48) = 255 - *(_WORD *)(v1 + 48);
  v7 = *(_WORD *)(v1 + 48);
  v8 = gSineTable[v7];
  v9 = &gOamMatrices[4 * v4];
  LOWORD(v7) = gSineTable[v7 + 64];
  v9[3] = v7;
  *v9 = v7;
  v9[1] = v8;
  v9[2] = -v8;
  *(_BYTE *)(v1 + 63) = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
  if ( v6 & 1 )
  {
    *(_BYTE *)(v1 + 42) = 1;
    *(_BYTE *)(v1 + 63) |= 1u;
  }
  *(_DWORD *)(v1 + 28) = sub_80DAF0C;
  return v11;
}
