int __fastcall sub_8145420(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@3
  __int16 v3; // r0@18
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v203935C )
  {
    DestroySprite(a1);
    return v5;
  }
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    if ( (signed int)*(_WORD *)(v1 + 32) <= 200 )
      StartSpriteAnimIfDifferent(v1, 2);
    else
      StartSpriteAnimIfDifferent(v1, 1);
    if ( (signed int)*(_WORD *)(v1 + 32) > -32 )
      *(_WORD *)(v1 + 32) -= 2;
    *(_WORD *)(v1 + 38) = -v203935A;
  }
  else
  {
    if ( v2 > 1 )
    {
      if ( v2 == 2 )
      {
        ++*(_WORD *)(v1 + 60);
        StartSpriteAnimIfDifferent(v1, 0);
        if ( *(_WORD *)(v1 + 60) & 3 )
          return v5;
        v3 = *(_WORD *)(v1 + 32) + 1;
      }
      else
      {
        if ( v2 != 3 )
          return v5;
        StartSpriteAnimIfDifferent(v1, 0);
        if ( (signed int)*(_WORD *)(v1 + 32) <= -32 )
          return v5;
        v3 = *(_WORD *)(v1 + 32) - 1;
      }
      *(_WORD *)(v1 + 32) = v3;
      return v5;
    }
    if ( !*(_WORD *)(v1 + 46) )
    {
      *(_WORD *)(v1 + 38) = 0;
      StartSpriteAnimIfDifferent(v1, 0);
    }
  }
  return v5;
}
