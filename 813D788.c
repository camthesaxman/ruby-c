int __fastcall sub_813D788(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  __int16 v3; // r0@3
  signed int v4; // r1@16
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        StartSpriteAnimIfDifferent(v1, 0);
        v3 = *(_WORD *)(v1 + 32) - 1;
        goto _0813D82E;
      case 1u:
        StartSpriteAnimIfDifferent(v1, 0);
        if ( dword_3005ED0 & 7 )
          return v6;
        v3 = *(_WORD *)(v1 + 32) + 1;
        goto _0813D82E;
      case 2u:
        StartSpriteAnimIfDifferent(v1, 2);
        if ( (signed int)*(_WORD *)(v1 + 32) > 120 && !(dword_3005ED0 & 7) )
          goto _0813D83C;
        v3 = *(_WORD *)(v1 + 32) + 1;
        goto _0813D82E;
      case 3u:
        StartSpriteAnimIfDifferent(v1, 3);
        break;
      case 4u:
        StartSpriteAnimIfDifferent(v1, 0);
        if ( (signed int)*(_WORD *)(v1 + 32) > -32 )
        {
          v3 = *(_WORD *)(v1 + 32) - 2;
_0813D82E:
          *(_WORD *)(v1 + 32) = v3;
        }
        break;
      default:
        break;
    }
  }
  if ( !(dword_3005ED0 & 7) )
  {
_0813D83C:
    if ( *(_WORD *)(v1 + 38) )
    {
      *(_WORD *)(v1 + 38) = 0;
    }
    else
    {
      v4 = Random() & 3;
      if ( v4 == 1 )
      {
        *(_WORD *)(v1 + 38) = 1;
      }
      else if ( v4 > 1 )
      {
        if ( v4 <= 3 )
          *(_WORD *)(v1 + 38) = 0;
      }
      else if ( !v4 )
      {
        *(_WORD *)(v1 + 38) = -1;
      }
    }
  }
  return v6;
}
