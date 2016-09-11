int __fastcall sub_80D0E8C(int a1)
{
  int v1; // r4@1
  signed int v2; // r1@1
  __int16 v3; // r0@7
  __int16 v4; // r0@9
  __int16 v5; // r0@11
  __int16 v6; // r2@12
  __int16 v7; // r1@15
  signed __int16 v8; // r0@16
  __int16 v9; // r0@23
  __int16 v10; // r0@25
  int v12; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 != 1 )
  {
    if ( v2 > 1 )
    {
      if ( v2 == 2 )
      {
        v9 = *(_WORD *)(a1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v9;
        if ( v9 > 1 )
        {
          *(_WORD *)(v1 + 50) = 0;
          *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
        }
        v10 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v10;
        if ( v10 > 16 )
        {
          *(_BYTE *)(v1 + 62) &= 0xFBu;
          move_anim_8072740(v1);
        }
      }
    }
    else if ( !*(_WORD *)(a1 + 46) )
    {
      v3 = *(_WORD *)(a1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v3;
      if ( v3 > 1 )
      {
        *(_WORD *)(v1 + 50) = 0;
        *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
      }
      v4 = *(_WORD *)(v1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v4;
      if ( v4 > 16 )
      {
        *(_BYTE *)(v1 + 62) &= 0xFBu;
_080D0F7A:
        ++*(_WORD *)(v1 + 46);
        return v12;
      }
    }
    return v12;
  }
  v5 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v5;
  if ( v5 > 3 )
  {
    v6 = *(_WORD *)(v1 + 50);
    if ( *(_WORD *)(v1 + 50) < (signed int)*(_WORD *)(v1 + 56) )
    {
      *(_WORD *)(v1 + 48) = 0;
      --*(_WORD *)(v1 + 34);
      *(_WORD *)(v1 + 50) = v6 + 1;
      if ( !(*(_WORD *)(v1 + 50) % 10 << 16) )
        audio_play_and_stuff(0xCDu, *(_WORD *)(v1 + 58));
    }
  }
  v7 = *(_WORD *)(v1 + 52) + *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 54) = v7;
  if ( v7 <= 31 )
  {
    if ( v7 > -32 )
      goto _080D0F64;
    v8 = -64;
  }
  else
  {
    v8 = 64;
  }
  *(_WORD *)(v1 + 54) = v8 - v7;
  *(_WORD *)(v1 + 52) = -*(_WORD *)(v1 + 52);
_080D0F64:
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 54);
  if ( *(_WORD *)(v1 + 56) == *(_WORD *)(v1 + 50) )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 50) = 0;
    goto _080D0F7A;
  }
  return v12;
}
