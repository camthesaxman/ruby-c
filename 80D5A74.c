int __fastcall sub_80D5A74(int a1)
{
  int v1; // r2@1
  signed int v2; // r0@1
  __int16 v3; // r0@10
  __int16 v4; // r0@12
  __int16 v5; // r0@13
  signed __int16 v6; // r0@14
  __int16 v7; // r0@17
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
_080D5AA6:
    v3 = *(_WORD *)(v1 + 34) + 8;
    *(_WORD *)(v1 + 34) = v3;
    if ( v3 >= (signed int)*(_WORD *)(v1 + 60) )
    {
      *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 60);
      ++*(_WORD *)(v1 + 46);
    }
    return v9;
  }
  if ( v2 <= 1 )
  {
    if ( v2 )
      return v9;
    if ( *(_WORD *)(v1 + 58) )
    {
      --*(_WORD *)(v1 + 58);
      return v9;
    }
    ++*(_WORD *)(v1 + 46);
    goto _080D5AA6;
  }
  if ( v2 == 2 )
  {
    v4 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v4;
    if ( v4 > 1 )
    {
      *(_WORD *)(v1 + 48) = 0;
      v5 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v5;
      if ( v5 & 1 )
        v6 = -3;
      else
        v6 = 3;
      *(_WORD *)(v1 + 38) = v6;
    }
    v7 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v7;
    if ( v7 > 16 )
      move_anim_8072740(v1);
  }
  return v9;
}
