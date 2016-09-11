int __fastcall sub_812D3AC(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  signed int v3; // r0@1
  __int16 v4; // r0@9
  __int16 v5; // r0@11
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  v3 = *(_WORD *)(v1 + 46);
  if ( v3 == 1 )
  {
    *(_WORD *)(v1 + 48) += 96;
    *(_WORD *)(v1 + 50) -= 26;
    obj_id_set_rotscale(v2, *(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50), 0);
    v4 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v4;
    if ( v4 == 5 )
      ++*(_WORD *)(v1 + 46);
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *(_WORD *)(v1 + 46) )
        return v7;
      *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
      *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
      sub_8078E70(v2, 0);
      *(_WORD *)(v1 + 48) = 256;
      *(_WORD *)(v1 + 50) = 256;
      goto _0812D484;
    }
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
      {
        *(_WORD *)(v1 + 38) -= 6;
        if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) < -32 )
          move_anim_8072740(v1);
      }
      return v7;
    }
  }
  *(_WORD *)(v1 + 48) += 96;
  *(_WORD *)(v1 + 50) += 48;
  obj_id_set_rotscale(v2, *(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50), 0);
  v5 = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v5;
  if ( v5 == 9 )
  {
    *(_WORD *)(v1 + 52) = 0;
    gSprites[68 * v2 + 62] |= 4u;
    sub_8078F40(v2);
_0812D484:
    ++*(_WORD *)(v1 + 46);
  }
  return v7;
}
