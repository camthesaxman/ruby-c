int __fastcall sub_80D5B0C(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  signed __int16 v3; // r0@8
  int v4; // r0@12
  __int16 v5; // r0@14
  __int16 v6; // r2@17
  __int16 v7; // r0@17
  __int16 v8; // r1@18
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    *(_WORD *)(v1 + 48) += 192;
    if ( battle_side_get_owner(v202F7C8) << 24 )
      v4 = -(*(_WORD *)(v1 + 48) << 16 >> 24);
    else
      v4 = *(_WORD *)(v1 + 48) << 16 >> 24;
    *(_WORD *)(v1 + 38) = v4;
    *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 50), *(_WORD *)(v1 + 54));
    *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 4) & 0xFF;
    v5 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v5;
    if ( v5 == 1 )
    {
      *(_WORD *)(v1 + 52) = 0;
_080D5BD6:
      ++*(_WORD *)(v1 + 46);
      return v10;
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( v2 )
        return v10;
      sub_80787B0(v1, 0);
      StartSpriteAnim(v1, word_3004B04);
      *(_WORD *)(v1 + 60) = word_3004B04;
      if ( battle_side_get_owner(v202F7C8) << 24 )
        v3 = 4;
      else
        v3 = -4;
      *(_WORD *)(v1 + 54) = v3;
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C9) & 3);
      goto _080D5BD6;
    }
    if ( v2 == 2 )
    {
      v6 = sine(*(_WORD *)(v1 + 50), *(_WORD *)(v1 + 54));
      *(_WORD *)(v1 + 36) = v6;
      *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 4) & 0xFF;
      v7 = *(_WORD *)(v1 + 52) + 1;
      *(_WORD *)(v1 + 52) = v7;
      if ( v7 == 31 )
      {
        v8 = v6 + *(_WORD *)(v1 + 32);
        *(_WORD *)(v1 + 32) = v8;
        *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
        *(_WORD *)(v1 + 38) = 0;
        *(_WORD *)(v1 + 36) = 0;
        *(_WORD *)(v1 + 46) = 256;
        *(_WORD *)(v1 + 48) = v8;
        *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
        *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
        *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
        sub_8078BD4(v1);
        *(_DWORD *)(v1 + 28) = sub_80D5C5C;
      }
    }
  }
  return v10;
}
