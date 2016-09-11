int __fastcall sub_80D7CD4(int a1)
{
  int v1; // r5@1
  __int16 *v2; // r1@5
  _WORD *v3; // r2@7
  int *v4; // r1@7
  signed int v5; // r4@7
  int v6; // r1@11
  int *v7; // r3@13
  _WORD *v8; // r2@13
  signed int v9; // r4@13
  int v11; // [sp+0h] [bp-24h]@7
  int v12; // [sp+20h] [bp-4h]@15

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  if ( word_3004B0E )
  {
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 50), (_WORD *)(v1 + 54));
  }
  else
  {
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  }
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 50) -= word_3004B04;
    v2 = word_3004B00;
  }
  else
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 50) += word_3004B04;
  }
  *(_WORD *)(v1 + 54) += v2[3];
  sub_8078D60(v1);
  v3 = (_WORD *)(v1 + 46);
  v4 = &v11;
  v5 = 7;
  do
  {
    *(_WORD *)v4 = *v3;
    ++v3;
    v4 = (int *)((char *)v4 + 2);
    --v5;
  }
  while ( v5 >= 0 );
  *(_WORD *)(v1 + 48) ^= 1u;
  *(_WORD *)(v1 + 50) ^= 1u;
  do
  {
    *(_WORD *)(v1 + 46) = 1;
    sub_8078CE8(v1);
    if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 16) > 0x110 )
      break;
    v6 = *(_WORD *)(v1 + 34) + *(_WORD *)(v1 + 38);
    if ( v6 > 160 )
      break;
  }
  while ( v6 >= -16 );
  *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
  *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
  *(_WORD *)(v1 + 38) = 0;
  *(_WORD *)(v1 + 36) = 0;
  v7 = &v11;
  v8 = (_WORD *)(v1 + 46);
  v9 = 7;
  do
  {
    *v8 = *(_WORD *)v7;
    v7 = (int *)((char *)v7 + 2);
    ++v8;
    --v9;
  }
  while ( v9 >= 0 );
  *(_WORD *)(v1 + 56) = word_3004B0A;
  *(_WORD *)(v1 + 58) = word_3004B0C;
  *(_DWORD *)(v1 + 28) = sub_80D7E18;
  return v12;
}
