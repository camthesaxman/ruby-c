int __fastcall sub_80CFB04(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r8@2
  __int16 v3; // r0@7
  int *v4; // r4@10
  signed int v5; // r0@10
  signed int v6; // r6@10
  signed int v7; // r0@10
  signed int v8; // r9@10
  int *v9; // r1@14
  __int16 v10; // r0@14
  __int16 v11; // r0@14
  __int16 v12; // r0@15
  int v13; // r4@17
  __int16 v14; // r0@17
  int *v15; // r6@17
  int v16; // r4@18
  __int16 v17; // r0@18
  int v18; // r4@19
  __int16 v19; // r0@19
  int *v20; // r5@20
  __int16 v21; // r1@20
  __int16 v22; // r0@22
  int *v23; // r1@26
  __int16 v25; // [sp+0h] [bp-24h]@1
  __int16 v26; // [sp+2h] [bp-22h]@1
  int v27; // [sp+20h] [bp-4h]@28

  v1 = a1;
  v25 = 0;
  v26 = 0;
  if ( sub_8076BE0() << 24 )
  {
    LOWORD(dword_3004B20[10 * v1 + 4]) = 2;
    word_3004B00[0] = -word_3004B00[0];
    v2 = 4 * v1;
    if ( word_3004B04 & 1 )
      word_3004B04 &= 0xFFFEu;
    else
      word_3004B04 |= 1u;
  }
  else
  {
    v2 = 4 * v1;
    if ( !(*(_BYTE *)(v202F7C9 + 0x2024A72) & 1) )
    {
      LOWORD(dword_3004B20[10 * v1 + 4]) = 1;
      word_3004B00[0] = -word_3004B00[0];
      word_3004B02 = -word_3004B02;
      if ( word_3004B04 & 1 )
        v3 = word_3004B04 & 0xFFFE;
      else
        v3 = word_3004B04 | 1;
      word_3004B04 = v3;
    }
  }
  v4 = &dword_3004B20[2 * (v2 + v1)];
  v5 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  *((_WORD *)v4 + 13) = v5;
  v6 = v5;
  v7 = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
  *((_WORD *)v4 + 14) = v7;
  v8 = v7;
  if ( v20239F8 & 1 && b_side_obj__get_some_boolean(v202F7C9 ^ 2) << 24 )
  {
    sub_807A3FC(v202F7C9, 0, &v25, &v26);
  }
  else
  {
    v25 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
    v26 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u);
  }
  v9 = &dword_3004B20[2 * (v2 + v1)];
  v10 = word_3004B00[0] + v25;
  *((_WORD *)v9 + 15) = word_3004B00[0] + v25;
  v25 = v10;
  v11 = word_3004B02 + v26;
  *((_WORD *)v9 + 16) = word_3004B02 + v26;
  v26 = v11;
  if ( v25 < v6 )
    v12 = v6 - v25;
  else
    v12 = v25 - v6;
  v13 = v12;
  v14 = sub_81174E0((signed __int16)(word_3004B04 & 0xFFFE));
  v15 = &dword_3004B20[2 * (v2 + v1)];
  *((_WORD *)v15 + 9) = sub_81174C4(v13, v14);
  *((_WORD *)v15 + 10) = sub_81174C4(*((_WORD *)v15 + 9), 128);
  *((_WORD *)v15 + 11) = word_3004B04;
  if ( v26 < v8 )
  {
    v18 = (signed __int16)(v8 - v26);
    v19 = sub_81174E0(*((_WORD *)v15 + 9));
    *((_WORD *)v15 + 12) = sub_81174C4(v18, v19) | 1;
  }
  else
  {
    v16 = (signed __int16)(v26 - v8);
    v17 = sub_81174E0(*((_WORD *)v15 + 9));
    *((_WORD *)v15 + 12) = sub_81174C4(v16, v17) & 0xFFFE;
  }
  v20 = &dword_3004B20[2 * (v2 + v1)];
  *((_WORD *)v20 + 7) = word_3004B06;
  v21 = word_3004B08;
  if ( word_3004B08 & 0x80 )
  {
    word_3004B08 ^= 0x80u;
    if ( (signed __int16)(v21 ^ 0x80) > 63 )
    {
      v22 = (unsigned __int8)sub_8079E90(v202F7C9) + word_3004B08 - 64;
      goto _080CFDC4;
    }
  }
  else if ( word_3004B08 > 63 )
  {
    v22 = (unsigned __int8)sub_8079E90(v202F7C9) + word_3004B08 - 64;
    goto _080CFDC4;
  }
  v22 = (unsigned __int8)sub_8079E90(v202F7C9) - word_3004B08;
_080CFDC4:
  *((_WORD *)v20 + 6) = v22;
  v23 = &dword_3004B20[2 * (v2 + v1)];
  if ( (signed int)*((_WORD *)v23 + 6) <= 2 )
    *((_WORD *)v23 + 6) = 3;
  *v23 = (int)sub_80CFA20;
  return v27;
}
