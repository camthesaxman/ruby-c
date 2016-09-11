int __fastcall sub_813085C(int a1)
{
  int v1; // r2@1
  signed int v2; // r1@1
  __int16 v3; // r0@8
  __int16 v4; // r0@9
  __int16 v5; // r0@11
  __int16 v6; // r0@13
  __int16 v7; // r0@16
  int v8; // r0@17
  int v10; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v5 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v5;
    if ( v5 != 8 )
      return v10;
    goto _081308CE;
  }
  if ( v2 > 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
      {
        *(_WORD *)(a1 + 36) += 3 * *(_WORD *)(a1 + 60);
        v7 = *(_WORD *)(a1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v7;
        if ( v7 == 8 )
        {
          v8 = *(_WORD *)(v1 + 58) - 1;
          *(_WORD *)(v1 + 58) = v8;
          if ( v8 << 16 )
          {
            *(_WORD *)(v1 + 48) = 0;
            --*(_WORD *)(v1 + 46);
          }
          else
          {
            move_anim_8072740(v1);
          }
        }
      }
      return v10;
    }
    *(_WORD *)(a1 + 36) -= 4 * *(_WORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v6;
    if ( v6 != 6 )
      return v10;
_081308CE:
    *(_WORD *)(v1 + 48) = 0;
_081308D2:
    ++*(_WORD *)(v1 + 46);
    return v10;
  }
  if ( !*(_WORD *)(a1 + 46) )
  {
    v3 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 1 )
    {
      *(_WORD *)(v1 + 48) = 0;
      *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 60);
      v4 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v4;
      if ( v4 == 12 )
        goto _081308D2;
    }
  }
  return v10;
}
