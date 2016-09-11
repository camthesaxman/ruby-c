int __fastcall sub_80D10B8(int a1)
{
  int v1; // r5@1
  int v2; // r7@2
  _BYTE *v3; // r0@2
  int v4; // r8@4
  unsigned __int8 v5; // r10@5
  int v6; // r9@8
  char *v7; // r2@9
  _BYTE *v8; // r0@9
  char *v9; // r2@13
  char v10; // r0@14
  char *v11; // r0@15
  int v12; // r6@19
  __int16 *v13; // r2@24
  __int16 v14; // r1@26
  __int16 v16; // [sp+0h] [bp-28h]@1
  __int16 v17; // [sp+2h] [bp-26h]@1
  int v18; // [sp+4h] [bp-24h]@5
  int v19; // [sp+24h] [bp-4h]@26

  v1 = a1;
  v16 = 0;
  v17 = 0;
  if ( word_3004B0A )
  {
    v2 = v202F7C9;
    v3 = (_BYTE *)33748936;
  }
  else
  {
    v2 = v202F7C8;
    v3 = (_BYTE *)33748937;
  }
  v4 = *v3;
  if ( word_3004B0C )
  {
    v5 = 2;
    v18 = 3;
  }
  else
  {
    v5 = 0;
    v18 = 1;
  }
  if ( battle_side_get_owner(v2) << 24 )
  {
    v6 = ((unsigned __int8)sub_8077ABC(v2, v5) + (unsigned __int16)word_3004B00[0]) & 0xFFFF;
    if ( b_side_obj__get_some_boolean(v4 ^ 2) << 24 )
    {
      v7 = gSprites;
      v8 = (_BYTE *)((v4 ^ 2) + 33704928);
    }
    else
    {
      v7 = gSprites;
      v8 = (_BYTE *)(v4 + 33704928);
    }
    goto _080D120A;
  }
  v6 = ((unsigned __int8)sub_8077ABC(v2, v5) - (unsigned __int16)word_3004B00[0]) & 0xFFFF;
  if ( !(byte_3001BAD & 2) || !(b_side_obj__get_some_boolean(v2 ^ 2) << 24) )
  {
    v7 = gSprites;
    v8 = (_BYTE *)(v2 + 33704928);
_080D120A:
    v11 = &v7[68 * *v8];
    goto _080D1214;
  }
  v9 = &gSprites[68 * *(_BYTE *)((v2 ^ 2) + 0x2024BE0)];
  if ( *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33704928) + 32] >= (signed int)*((_WORD *)v9 + 16) )
  {
    v11 = &gSprites[68 * *(_BYTE *)(v2 + 33704928)];
_080D1214:
    v10 = v11[67] - 1;
    goto _080D121A;
  }
  v10 = v9[67] + 1;
_080D121A:
  *(_BYTE *)(v1 + 67) = v10;
  v12 = ((unsigned __int8)sub_8077ABC(v2, v18) + (unsigned __int16)word_3004B02) & 0xFFFF;
  if ( byte_3001BAD & 2 && b_side_obj__get_some_boolean(v4 ^ 2) << 24 )
  {
    sub_807A3FC(v4, (unsigned __int8)word_3004B0C, &v16, &v17);
  }
  else
  {
    v16 = (unsigned __int8)sub_8077ABC(v4, v5);
    v17 = (unsigned __int8)sub_8077ABC(v4, v18);
  }
  if ( battle_side_get_owner(v4) << 24 )
  {
    v16 += word_3004B06;
    v13 = word_3004B00;
  }
  else
  {
    v13 = word_3004B00;
    v16 -= word_3004B06;
  }
  v17 += v13[4];
  v14 = v17;
  *(_WORD *)(v1 + 48) = v6;
  *(_WORD *)(v1 + 32) = v6;
  *(_WORD *)(v1 + 52) = v12;
  *(_WORD *)(v1 + 34) = v12;
  *(_WORD *)(v1 + 50) = v16;
  *(_WORD *)(v1 + 54) = v14;
  *(_WORD *)(v1 + 46) = *v13;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_DWORD *)(v1 + 28) = sub_80D1098;
  call_via_r1(v1, sub_80D1098);
  return v19;
}
