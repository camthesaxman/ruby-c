int __fastcall sub_80DA4D8(int a1)
{
  int v1; // r7@1
  int v2; // r5@1
  unsigned __int8 *v3; // r0@2
  unsigned __int8 v4; // r6@4
  __int16 v5; // r0@6
  __int16 v6; // r1@6
  int v7; // r0@6
  int v8; // r1@6
  _BYTE *v9; // r3@11
  int v10; // r0@11
  char v11; // r0@11
  char v12; // r1@11
  int v13; // r0@13
  int v14; // r0@15
  __int16 v15; // r4@15
  __int16 *v16; // r2@15
  int v18; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = a1 + 46;
  if ( word_3004B0E & 0x100 )
    v3 = (unsigned __int8 *)33748936;
  else
    v3 = (unsigned __int8 *)33748937;
  v4 = *v3;
  if ( !(battle_side_get_owner(*v3) << 24) )
    word_3004B00[0] = -word_3004B00[0];
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v4, 0) + word_3004B00[0];
  v5 = (unsigned __int8)sub_8077ABC(v4, 1u);
  v6 = v5 + word_3004B02;
  *(_WORD *)(v1 + 34) = v5 + word_3004B02;
  *(_WORD *)(v2 + 8) = v6 << 8;
  *(_WORD *)(v2 + 14) = *(_WORD *)(v2 + 14) & 1 | 2 * (v5 + word_3004B0C);
  *(_BYTE *)v2 |= 4u;
  v7 = (unsigned __int16)word_3004B04;
  v8 = (unsigned __int8)word_3004B04;
  *(_WORD *)(v2 + 2) = (unsigned __int8)word_3004B04;
  *(_WORD *)(v2 + 10) = (unsigned int)(v7 << 16) >> 24;
  *(_WORD *)(v2 + 4) = word_3004B06;
  *(_WORD *)(v2 + 6) = word_3004B08;
  *(_WORD *)(v2 + 12) = word_3004B0A;
  if ( ((v8 - 64) & 0xFFFFu) > 0x7F )
  {
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v4) & 3);
    *(_BYTE *)(v2 + 14) |= 1u;
    if ( *(_WORD *)(v2 + 4) & 0x8000 )
    {
      v9 = (_BYTE *)(v1 + 63);
      v13 = (unsigned __int8)(*(_BYTE *)(v1 + 63) & 0xFE) | (*(_BYTE *)(v1 + 63) & 1 ^ 1) & 1;
      *(_BYTE *)(v1 + 63) = v13;
      *(_BYTE *)(v1 + 42) = v13 & 1;
      v11 = *(_BYTE *)(v1 + 63);
      v12 = 4;
      goto _080DA66E;
    }
  }
  else
  {
    if ( byte_3001BAD & 2 )
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v4) + 1) & 3);
    else
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v4) & 3);
    *(_BYTE *)(v2 + 14) &= 0xFEu;
    if ( !(*(_WORD *)(v2 + 4) & 0x8000) )
    {
      v9 = (_BYTE *)(v1 + 63);
      v10 = (unsigned __int8)(*(_BYTE *)(v1 + 63) & 0xFE) | *(_BYTE *)(v1 + 63) & 1 ^ 1;
      *(_BYTE *)(v1 + 63) = v10;
      *(_BYTE *)(v1 + 42) = v10 & 1;
      v11 = *(_BYTE *)(v1 + 63);
      v12 = 4;
_080DA66E:
      *v9 = (v11 | v12) & 0xEF;
      goto _080DA678;
    }
  }
_080DA678:
  *(_BYTE *)v2 = *(_BYTE *)v2 & 0xF | 16 * ((unsigned int)*(_WORD *)(v2 + 2) >> 6);
  *(_WORD *)(v1 + 36) = *(_BYTE *)(v2 + 12) * (signed int)gSineTable[*(_WORD *)(v2 + 2)] >> 8;
  v14 = ((-*(_WORD *)(v1 + 36) >> 1) + *(_BYTE *)(v2 + 10)) & 0xFF;
  v15 = gSineTable[v14];
  v16 = &gOamMatrices[4 * ((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27)];
  LOWORD(v14) = gSineTable[v14 + 64];
  v16[3] = v14;
  *v16 = v14;
  v16[1] = v15;
  v16[2] = -v15;
  *(_DWORD *)(v1 + 28) = sub_80DA6F0;
  return v18;
}
