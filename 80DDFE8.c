int __fastcall sub_80DDFE8(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  int v3; // r0@8
  int v4; // r1@8
  int v5; // r0@8
  int v6; // r0@10
  int v7; // r0@12
  int v8; // r1@12
  int v9; // r0@12
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v6 = *(_WORD *)(v1 + 50) - 1;
    *(_WORD *)(v1 + 50) = v6;
    if ( v6 << 16 > 0 )
      return v11;
    *(_WORD *)(v1 + 48) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
    *(_WORD *)(v1 + 54) = 16 * *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 56) = 16 * *(_WORD *)(v1 + 34);
    *(_WORD *)(v1 + 58) = 16 * (*(_WORD *)(v1 + 48) - (signed int)*(_WORD *)(v1 + 32)) / *(_WORD *)(v1 + 52);
    *(_WORD *)(v1 + 60) = 16 * (*(_WORD *)(v1 + 50) - (signed int)*(_WORD *)(v1 + 34)) / *(_WORD *)(v1 + 52);
    goto _080DE0E2;
  }
  if ( v2 > 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
        move_anim_8074EE0(v1);
      return v11;
    }
    v7 = *(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 54) = v7;
    v8 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 56);
    *(_WORD *)(v1 + 56) = v8;
    *(_WORD *)(v1 + 32) = v7 << 16 >> 20;
    *(_WORD *)(v1 + 34) = v8 << 16 >> 20;
    v9 = *(_WORD *)(v1 + 52) - 1;
    *(_WORD *)(v1 + 52) = v9;
    if ( v9 << 16 > 0 )
      return v11;
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
_080DE0E2:
    ++*(_WORD *)(v1 + 46);
    return v11;
  }
  if ( !v2 )
  {
    v3 = *(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 54) = v3;
    v4 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 56);
    *(_WORD *)(v1 + 56) = v4;
    *(_WORD *)(v1 + 32) = v3 << 16 >> 20;
    *(_WORD *)(v1 + 34) = v4 << 16 >> 20;
    v5 = *(_WORD *)(v1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v5;
    if ( v5 << 16 <= 0 )
      goto _080DE0E2;
  }
  return v11;
}
