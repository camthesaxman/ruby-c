int __fastcall sub_80D6328(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@8
  unsigned __int8 v3; // r4@10
  unsigned __int8 v4; // r0@17
  unsigned __int8 v5; // r1@17
  __int16 v6; // r0@21
  __int16 *v7; // r2@21
  __int16 v8; // r1@21
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B08 == 1 )
    goto _080D63A0;
  if ( word_3004B08 > 1 )
  {
    if ( word_3004B08 == 2 )
    {
      if ( b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
        v3 = v202F7C8 ^ 2;
      else
        v3 = v202F7C8;
      goto _080D63A4;
    }
    if ( word_3004B08 == 3 && b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
    {
      v3 = v202F7C9 ^ 2;
      goto _080D63A4;
    }
    goto _080D63A0;
  }
  if ( word_3004B08 )
  {
_080D63A0:
    v2 = (unsigned __int8 *)33748937;
    goto _080D63A2;
  }
  v2 = (unsigned __int8 *)33748936;
_080D63A2:
  v3 = *v2;
_080D63A4:
  if ( word_3004B0A )
  {
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u);
    v4 = v3;
    v5 = 3;
  }
  else
  {
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 0);
    v4 = v3;
    v5 = 1;
  }
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v4, v5);
  *(_WORD *)(v1 + 36) = word_3004B02 * (signed int)gSineTable[word_3004B00[0]] >> 8;
  *(_WORD *)(v1 + 38) = word_3004B02 * (signed int)gSineTable[word_3004B00[0] + 64] >> 8;
  if ( word_3004B0C & 1 )
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v3) + 1) & 3);
  v6 = gSineTable[word_3004B04];
  v7 = &gOamMatrices[4 * ((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27)];
  v8 = gSineTable[word_3004B04 + 64];
  v7[3] = v8;
  *v7 = v8;
  v7[1] = v6;
  v7[2] = -v6;
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DA48C;
  return v10;
}
