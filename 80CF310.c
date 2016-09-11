int __fastcall sub_80CF310(int a1)
{
  int v1; // r1@1
  signed int v2; // r0@1
  __int16 v3; // r0@7
  int v4; // r0@9
  __int16 v5; // r0@11
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    *(_WORD *)(v1 + 38) += 3;
    v4 = *(_WORD *)(v1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v4;
    if ( !(v4 << 16) )
    {
_080CF354:
      ++*(_WORD *)(v1 + 46);
      return v7;
    }
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      v5 = *(_WORD *)(v1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v5;
      if ( v5 == 64 )
        move_anim_8072740(v1);
    }
  }
  else if ( !v2 )
  {
    *(_WORD *)(v1 + 38) -= 3;
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 == 6 )
      goto _080CF354;
  }
  return v7;
}
