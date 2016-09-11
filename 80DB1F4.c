int __fastcall sub_80DB1F4(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  int v3; // r0@7
  __int16 v4; // r0@8
  unsigned __int8 v5; // r0@11
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v4 = *(_WORD *)(v1 + 38) + 10;
    *(_WORD *)(v1 + 38) = v4;
    if ( !(v4 & 0x8000) )
    {
_080DB238:
      ++*(_WORD *)(v1 + 46);
      return v7;
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( v2 )
        return v7;
      v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u);
      *(_WORD *)(v1 + 34) = v3;
      *(_WORD *)(v1 + 38) = -(signed __int16)v3 - 32;
      goto _080DB238;
    }
    if ( v2 == 2 )
    {
      *(_WORD *)(v1 + 38) -= 10;
      if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) < -32 )
      {
        v5 = obj_id_for_side_relative_to_move(0);
        gSprites[68 * v5 + 62] &= 0xFBu;
        move_anim_8072740(v1);
      }
    }
  }
  return v7;
}
