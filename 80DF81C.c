int __fastcall sub_80DF81C(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  __int16 v3; // r0@4
  __int16 v4; // r1@5
  __int16 v5; // r0@8
  __int16 v6; // r1@10
  __int16 v7; // r0@13
  __int16 v8; // r1@14
  __int16 v9; // r0@17
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v2 == 1 )
    {
      *(_WORD *)(a1 + 58) = (*(_WORD *)(a1 + 58) - *(_WORD *)(a1 + 56)) & 0xFF;
      v6 = *(_WORD *)(a1 + 60);
      if ( (signed int)*(_WORD *)(a1 + 60) <= 149 )
      {
        *(_WORD *)(a1 + 60) = v6 + 8;
        if ( (signed __int16)(v6 + 8) > 149 )
          *(_WORD *)(a1 + 60) = 150;
      }
      *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 58), *(_WORD *)(a1 + 60));
      *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 58), *(_WORD *)(v1 + 60));
      v7 = *(_WORD *)(v1 + 54) + 1;
      *(_WORD *)(v1 + 54) = v7;
      if ( v7 > 5 )
      {
        *(_WORD *)(v1 + 54) = 0;
        v8 = *(_WORD *)(v1 + 56);
        if ( (signed int)*(_WORD *)(v1 + 56) <= 15 )
        {
          *(_WORD *)(v1 + 56) = v8 + 1;
          if ( (signed __int16)(v8 + 1) > 15 )
            *(_WORD *)(v1 + 56) = 16;
        }
      }
      v9 = *(_WORD *)(v1 + 52) + 1;
      *(_WORD *)(v1 + 52) = v9;
      if ( v9 > 20 )
        move_anim_8072740(v1);
    }
  }
  else
  {
    *(_WORD *)(a1 + 58) = (*(_WORD *)(a1 + 58) - *(_WORD *)(a1 + 56)) & 0xFF;
    *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 58), *(_WORD *)(a1 + 60));
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 58), *(_WORD *)(v1 + 60));
    v3 = *(_WORD *)(v1 + 54) + 1;
    *(_WORD *)(v1 + 54) = v3;
    if ( v3 > 5 )
    {
      *(_WORD *)(v1 + 54) = v2;
      v4 = *(_WORD *)(v1 + 56);
      if ( (signed int)*(_WORD *)(v1 + 56) <= 15 )
      {
        *(_WORD *)(v1 + 56) = v4 + 1;
        if ( (signed __int16)(v4 + 1) > 15 )
          *(_WORD *)(v1 + 56) = 16;
      }
    }
    v5 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v5;
    if ( v5 > 60 )
    {
      *(_WORD *)(v1 + 52) = 0;
      ++*(_WORD *)(v1 + 46);
    }
  }
  return v11;
}
