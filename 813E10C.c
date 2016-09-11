int __fastcall sub_813E10C(int a1)
{
  int v1; // r3@1
  unsigned int v2; // r0@1
  __int16 v3; // r4@3
  __int16 v4; // r0@5
  __int16 v5; // r1@5
  __int16 v6; // r1@6
  __int16 v7; // r2@13
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 > 4 )
  {
def_813E120:
    v3 = *(_WORD *)(v1 + 36);
    if ( (signed int)*(_WORD *)(v1 + 36) <= -56 )
    {
      v4 = *(_WORD *)(v1 + 32);
      *(_WORD *)(v1 + 58) = v4;
      v5 = *(_WORD *)(v1 + 34);
      *(_WORD *)(v1 + 60) = v5;
      *(_WORD *)(v1 + 32) = v4 + v3;
      *(_WORD *)(v1 + 34) = v5 + *(_WORD *)(v1 + 38);
      *(_WORD *)(v1 + 36) = 0;
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 46) = 1;
      *(_WORD *)(v1 + 48) = 0;
    }
    else
    {
      *(_WORD *)(v1 + 36) = v3 - 8;
      *(_WORD *)(v1 + 38) += 6;
    }
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_813E120;
      case 1u:
        v6 = *(_WORD *)(v1 + 48);
        if ( !(v6 & 1) )
        {
          if ( v6 & 2 )
          {
            *(_WORD *)(v1 + 36) = -1;
            *(_WORD *)(v1 + 38) = 1;
          }
          else
          {
            *(_WORD *)(v1 + 36) = 0;
            *(_WORD *)(v1 + 38) = 0;
          }
        }
        *(_WORD *)(v1 + 48) = v6 + 1;
        return v9;
      case 2u:
        *(_BYTE *)(v1 + 62) |= 4u;
        *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 58);
        *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 60);
        *(_WORD *)(v1 + 36) = 0;
        *(_WORD *)(v1 + 38) = 0;
        return v9;
      case 3u:
        *(_BYTE *)(v1 + 62) &= 0xFBu;
        ++*(_WORD *)(v1 + 48);
        break;
      case 4u:
        break;
    }
    v7 = *(_WORD *)(v1 + 36);
    if ( (signed int)*(_WORD *)(v1 + 36) <= -56 )
    {
      *(_WORD *)(v1 + 32) += v7;
      *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
      *(_WORD *)(v1 + 36) = 0;
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 46) = 1;
    }
    else
    {
      *(_WORD *)(v1 + 36) = v7 - 4;
      *(_WORD *)(v1 + 38) += 3;
    }
  }
  return v9;
}
