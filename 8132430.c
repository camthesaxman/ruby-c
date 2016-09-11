int __fastcall sub_8132430(int a1)
{
  int v1; // r3@1
  signed int v2; // r1@1
  __int16 v3; // r0@8
  __int16 v4; // r1@9
  __int16 v5; // r0@16
  __int16 v6; // r0@18
  __int16 v7; // r1@19
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  if ( v2 == 1 )
  {
    v5 = *(_WORD *)(a1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v5;
    if ( v5 == 10 )
    {
      *(_WORD *)(v1 + 46) = 0;
      *(_WORD *)(v1 + 48) = 0;
_08132510:
      ++*(_WORD *)(v1 + 50);
      return v9;
    }
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      v6 = *(_WORD *)(a1 + 46) + 1;
      *(_WORD *)(v1 + 46) = v6;
      if ( v6 > 1 )
      {
        *(_WORD *)(v1 + 46) = 0;
        v7 = *(_WORD *)(v1 + 48);
        if ( v7 & 1 )
        {
          if ( (signed int)*(_WORD *)(v1 + 60) <= 15 )
            ++*(_WORD *)(v1 + 60);
        }
        else if ( *(_WORD *)(v1 + 58) )
        {
          --*(_WORD *)(v1 + 58);
        }
        *(_WORD *)(v1 + 48) = v7 + 1;
        v4000052 = (*(_WORD *)(v1 + 60) << 8) | *(_WORD *)(v1 + 58);
        if ( *(_WORD *)(v1 + 60) == 16 )
          goto _08132510;
      }
    }
    else if ( v2 == 3 )
    {
      move_anim_8074EE0(a1);
    }
  }
  else if ( !*(_WORD *)(a1 + 50) )
  {
    v3 = *(_WORD *)(a1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 > 1 )
    {
      *(_WORD *)(v1 + 46) = 0;
      v4 = *(_WORD *)(v1 + 48);
      if ( v4 & 1 )
      {
        if ( *(_WORD *)(v1 + 60) )
          --*(_WORD *)(v1 + 60);
      }
      else if ( (signed int)*(_WORD *)(v1 + 58) <= 15 )
      {
        ++*(_WORD *)(v1 + 58);
      }
      *(_WORD *)(v1 + 48) = v4 + 1;
      v4000052 = (*(_WORD *)(v1 + 60) << 8) | *(_WORD *)(v1 + 58);
      if ( !*(_WORD *)(v1 + 60) )
        goto _08132510;
    }
  }
  return v9;
}
