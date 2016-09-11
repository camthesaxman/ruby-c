int __fastcall sub_80D7F10(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@5
  _BYTE *v3; // r0@8
  __int16 v4; // r0@12
  signed __int16 v5; // r0@18
  __int16 v6; // r0@22
  __int16 v7; // r0@22
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B08 )
  {
    if ( word_3004B0A )
    {
      sub_807A3FC(v202F7C9, 0, (_WORD *)(a1 + 32), (_WORD *)(a1 + 34));
      if ( battle_side_get_owner(v202F7C9) << 24 )
        v4 = *(_WORD *)(v1 + 32) - word_3004B00[0];
      else
        v4 = word_3004B00[0] + *(_WORD *)(v1 + 32);
      *(_WORD *)(v1 + 32) = v4;
      *(_WORD *)(v1 + 34) += word_3004B02;
    }
    else
    {
      sub_8078764(a1, 0);
    }
    v3 = (_BYTE *)33748937;
  }
  else
  {
    if ( word_3004B0A )
    {
      sub_807A3FC(v202F7C8, 0, (_WORD *)(a1 + 32), (_WORD *)(a1 + 34));
      if ( battle_side_get_owner(v202F7C8) << 24 )
        v2 = *(_WORD *)(v1 + 32) - word_3004B00[0];
      else
        v2 = word_3004B00[0] + *(_WORD *)(v1 + 32);
      *(_WORD *)(v1 + 32) = v2;
      *(_WORD *)(v1 + 34) += word_3004B02;
    }
    else
    {
      sub_80787B0(a1, 0);
    }
    v3 = (_BYTE *)33748936;
  }
  *(_WORD *)(v1 + 60) = *v3;
  if ( word_3004B0A && battle_type_is_double() << 24 )
    v5 = 64;
  else
    v5 = 32;
  *(_WORD *)(v1 + 58) = v5;
  if ( !(battle_side_get_owner(v202F7C9) << 24) )
    *(_WORD *)(v1 + 34) += 8;
  *(_WORD *)(v1 + 46) = word_3004B06;
  v6 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 48) = v6;
  *(_WORD *)(v1 + 50) = v6;
  v7 = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 52) = v7;
  *(_WORD *)(v1 + 54) = v7 + word_3004B04;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = 64;
  *(_DWORD *)(v1 + 28) = sub_80D8048;
  call_via_r1(v1, sub_80D8048);
  return v9;
}
