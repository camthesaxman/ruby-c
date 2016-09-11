int __fastcall sub_8145378(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@3
  int v3; // r0@6
  char v4; // r1@6
  __int16 v5; // r0@10
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v203935C )
  {
    DestroySprite(a1);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 46);
    if ( v2 <= 5 )
    {
      switch ( v2 )
      {
        case 0u:
          StartSpriteAnimIfDifferent(v1, 0);
          return v7;
        case 1u:
          v3 = v1;
          v4 = 1;
          goto _08145402;
        case 2u:
          StartSpriteAnimIfDifferent(v1, 2);
          return v7;
        case 3u:
          StartSpriteAnimIfDifferent(v1, 3);
          return v7;
        case 4u:
          StartSpriteAnimIfDifferent(v1, 0);
          if ( (signed int)*(_WORD *)(v1 + 32) <= 120 )
            return v7;
          v5 = *(_WORD *)(v1 + 32) - 1;
          goto _08145416;
        case 5u:
          v3 = v1;
          v4 = 0;
_08145402:
          StartSpriteAnimIfDifferent(v3, v4);
          if ( (signed int)*(_WORD *)(v1 + 32) > -32 )
          {
            v5 = *(_WORD *)(v1 + 32) - 1;
_08145416:
            *(_WORD *)(v1 + 32) = v5;
          }
          break;
        default:
          return v7;
      }
    }
  }
  return v7;
}
