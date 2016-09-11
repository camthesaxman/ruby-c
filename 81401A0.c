int __fastcall sub_81401A0(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  unsigned __int8 v3; // r2@3
  __int16 v4; // r0@4
  __int16 v5; // r0@8
  unsigned __int8 v6; // r2@12
  __int16 v7; // r0@13
  __int16 v8; // r0@17
  unsigned __int8 v9; // r2@22
  __int16 v10; // r0@23
  int v11; // r0@27
  int v12; // r1@27
  __int16 v13; // r0@34
  int v15; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) & 0xFF;
  if ( v2 > 6 )
  {
def_81401B8:
    v13 = *(_WORD *)(a1 + 56) + 1;
    *(_WORD *)(v1 + 56) = v13;
    if ( v13 == 31 )
    {
      *(_WORD *)(v1 + 56) = 0;
      *(_WORD *)(v1 + 52) &= 0xFF00u;
      StartSpriteAffineAnim(v1, 3);
      if ( (signed int)*(_WORD *)(v1 + 54) >= 0 )
        StartSpriteAffineAnim(v1, 1);
      else
        StartSpriteAffineAnim(v1, 2);
      audio_play(0x17u);
    }
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v3 = v201784C;
        if ( v201784C <= 255 )
        {
          v4 = v201784C + 176;
        }
        else
        {
          *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 54);
          v4 = v3;
        }
        v201784C = v4;
        ++*(_WORD *)(v1 + 56);
        *(_BYTE *)(v1 + 44) &= 0x7Fu;
        if ( ((*(_WORD *)(v1 + 56) + 7) & 0xFFFFu) > 0xE )
          goto _081402B4;
        return v15;
      case 1u:
        v5 = *(_WORD *)(a1 + 56) + 1;
        *(_WORD *)(v1 + 56) = v5;
        if ( v5 != 1 )
          goto _081402CC;
        *(_WORD *)(v1 + 56) = 0;
        *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 54);
        ++*(_WORD *)(v1 + 52);
        *(_BYTE *)(v1 + 44) &= 0x7Fu;
        if ( (signed int)*(_WORD *)(v1 + 54) >= 0 )
          ChangeSpriteAffineAnim(v1, 1);
        else
          ChangeSpriteAffineAnim(v1, 2);
        return v15;
      case 2u:
        v6 = v201784C;
        if ( v201784C <= 255 )
        {
          v7 = v201784C + 176;
        }
        else
        {
          *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 54);
          v7 = v6;
        }
        v201784C = v7;
        ++*(_WORD *)(v1 + 56);
        *(_BYTE *)(v1 + 44) &= 0x7Fu;
        if ( ((*(_WORD *)(v1 + 56) + 12) & 0xFFFFu) > 0x18 )
        {
_081402B4:
          v201784C = 0;
          ++*(_WORD *)(v1 + 52);
          *(_WORD *)(v1 + 56) = 0;
        }
        return v15;
      case 3u:
        v8 = *(_WORD *)(a1 + 56);
        *(_WORD *)(v1 + 56) = v8 + 1;
        if ( v8 & 0x8000 )
        {
_081402CC:
          *(_BYTE *)(v1 + 44) |= 0x80u;
        }
        else
        {
          *(_WORD *)(v1 + 56) = 0;
          *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 54);
          ++*(_WORD *)(v1 + 52);
          *(_BYTE *)(v1 + 44) &= 0x7Fu;
          if ( (signed int)*(_WORD *)(v1 + 54) >= 0 )
            ChangeSpriteAffineAnim(v1, 1);
          else
            ChangeSpriteAffineAnim(v1, 2);
_08140310:
          v9 = v201784C;
          if ( v201784C <= 255 )
          {
            v10 = v201784C + 176;
          }
          else
          {
            *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 54);
            v10 = v9;
          }
          v201784C = v10;
          ++*(_WORD *)(v1 + 56);
          *(_BYTE *)(v1 + 44) &= 0x7Fu;
          if ( ((*(_WORD *)(v1 + 56) + 4) & 0xFFFFu) > 8 )
          {
            v201784C = 0;
            ++*(_WORD *)(v1 + 52);
            *(_WORD *)(v1 + 56) = 0;
            *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 54);
          }
        }
        break;
      case 4u:
        goto _08140310;
      case 5u:
        v11 = *(_WORD *)(a1 + 52) + 256;
        *(_WORD *)(v1 + 52) = v11;
        v12 = v11 << 16 >> 24;
        if ( v12 == v2017848 )
        {
          *(_BYTE *)(v1 + 44) |= 0x80u;
          *(_DWORD *)(v1 + 28) = sub_8140410;
        }
        else
        {
          if ( v2017848 != 4 || v11 << 16 >> 24 != 3 )
            ++*(_WORD *)(v1 + 52);
          else
            *(_DWORD *)(v1 + 28) = sub_8140434;
          *(_BYTE *)(v1 + 44) |= 0x80u;
        }
        break;
      default:
        goto def_81401B8;
    }
  }
  return v15;
}
