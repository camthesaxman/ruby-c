int __fastcall sub_8105E08(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  __int16 v3; // r0@4
  __int16 v4; // r0@6
  __int16 v5; // r0@8
  __int16 v6; // r0@10
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        StartSpriteAnim(v1, v200000A - 1);
        ++*(_WORD *)(v1 + 46);
        goto _08105E52;
      case 1u:
_08105E52:
        v3 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v3;
        if ( v3 > 3 )
        {
          ++*(_WORD *)(v1 + 46);
          *(_WORD *)(v1 + 48) = 0;
        }
        return v8;
      case 2u:
        v4 = *(_WORD *)(v1 + 32) + 4;
        *(_WORD *)(v1 + 32) = v4;
        if ( v4 <= 207 )
          return v8;
        *(_WORD *)(v1 + 32) = 208;
        goto _08105EA2;
      case 3u:
        v5 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v5;
        if ( v5 > 90 )
          goto _08105EA2;
        break;
      case 4u:
        v6 = *(_WORD *)(v1 + 32) + 4;
        *(_WORD *)(v1 + 32) = v6;
        if ( v6 > 247 )
_08105EA2:
          ++*(_WORD *)(v1 + 46);
        break;
      case 5u:
        *(_WORD *)(v1 + 60) = 0;
        break;
      default:
        return v8;
    }
  }
  return v8;
}
