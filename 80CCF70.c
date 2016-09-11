int __fastcall sub_80CCF70(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r0@3
  __int16 v4; // r0@4
  __int16 v5; // r0@12
  __int16 v6; // r0@14
  __int16 v7; // r1@16
  __int16 v8; // r1@22
  int v10; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = *(_WORD *)(v1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v3;
        if ( v3 << 16 > 0 )
        {
          *(_WORD *)(v1 + 50) = 0;
          v4 = *(_WORD *)(v1 + 48) + 1;
          *(_WORD *)(v1 + 48) = v4;
          if ( v4 & 1 )
          {
            if ( (signed int)*(_WORD *)(v1 + 58) <= 15 )
              ++*(_WORD *)(v1 + 58);
          }
          else if ( (signed int)*(_WORD *)(v1 + 60) > 0 )
          {
            --*(_WORD *)(v1 + 60);
          }
          v4000052 = (*(_WORD *)(v1 + 60) << 8) | *(_WORD *)(v1 + 58);
          if ( *(_WORD *)(v1 + 58) == 16 && !*(_WORD *)(v1 + 60) )
          {
            *(_WORD *)(v1 + 48) = 0;
            goto _080CD0A8;
          }
        }
        break;
      case 1u:
        v5 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v5;
        if ( v5 > 8 )
        {
          *(_WORD *)(v1 + 48) = 0;
          StartSpriteAffineAnim(v1, 1);
          goto _080CD0A8;
        }
        break;
      case 2u:
        sub_80CD0CC(v1, 16, 4);
        v6 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v6;
        if ( v6 > 2 )
        {
          *(_WORD *)(v1 + 48) = 0;
          ++*(_WORD *)(v1 + 34);
        }
        v7 = *(_WORD *)(v1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v7;
        if ( v7 > 29 )
        {
          if ( v7 & 1 )
          {
            if ( (signed int)*(_WORD *)(v1 + 58) > 0 )
              --*(_WORD *)(v1 + 58);
          }
          else if ( (signed int)*(_WORD *)(v1 + 60) <= 15 )
          {
            ++*(_WORD *)(v1 + 60);
          }
          v4000052 = (*(_WORD *)(v1 + 60) << 8) | *(_WORD *)(v1 + 58);
          v8 = *(_WORD *)(v1 + 58);
          if ( !*(_WORD *)(v1 + 58) && *(_WORD *)(v1 + 60) == 16 )
          {
            *(_WORD *)(v1 + 48) = v8;
            *(_WORD *)(v1 + 50) = v8;
            goto _080CD0A8;
          }
        }
        break;
      case 3u:
        *(_BYTE *)(v1 + 62) |= 4u;
_080CD0A8:
        ++*(_WORD *)(v1 + 46);
        break;
      case 4u:
        v4000050 = 0;
        v4000052 = 0;
        move_anim_8072740(v1);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
