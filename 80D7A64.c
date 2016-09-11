int __fastcall sub_80D7A64(int a1)
{
  int v1; // r5@1
  _WORD *v2; // r2@7
  int *v3; // r1@7
  signed int v4; // r4@7
  int v5; // r1@11
  int *v6; // r3@13
  _WORD *v7; // r2@13
  signed int v8; // r4@13
  int v10; // [sp+0h] [bp-24h]@7
  int v11; // [sp+20h] [bp-4h]@15

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  if ( word_3004B0A )
  {
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 50), (_WORD *)(v1 + 54));
  }
  else
  {
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B06;
  }
  if ( battle_side_get_owner(v202F7C8) << 24 )
    *(_WORD *)(v1 + 50) -= word_3004B04;
  else
    *(_WORD *)(v1 + 50) += word_3004B04;
  v2 = (_WORD *)(v1 + 46);
  v3 = &v10;
  v4 = 7;
  do
  {
    *(_WORD *)v3 = *v2;
    ++v2;
    v3 = (int *)((char *)v3 + 2);
    --v4;
  }
  while ( v4 >= 0 );
  sub_8078D60(v1);
  *(_WORD *)(v1 + 48) ^= 1u;
  *(_WORD *)(v1 + 50) ^= 1u;
  do
  {
    *(_WORD *)(v1 + 46) = 1;
    sub_8078CE8(v1);
    if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 16) > 0x110 )
      break;
    v5 = *(_WORD *)(v1 + 34) + *(_WORD *)(v1 + 38);
    if ( v5 > 160 )
      break;
  }
  while ( v5 >= -16 );
  *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
  *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
  *(_WORD *)(v1 + 38) = 0;
  *(_WORD *)(v1 + 36) = 0;
  v6 = &v10;
  v7 = (_WORD *)(v1 + 46);
  v8 = 7;
  do
  {
    *v7 = *(_WORD *)v6;
    v6 = (int *)((char *)v6 + 2);
    ++v7;
    --v8;
  }
  while ( v8 >= 0 );
  *(_DWORD *)(v1 + 28) = sub_8078D8C;
  oamt_set_x3A_32(v1, (int)sub_80D7BA0);
  return v11;
}
