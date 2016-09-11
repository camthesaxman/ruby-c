int __fastcall sub_81454E0(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@3
  signed int v3; // r1@9
  __int16 v4; // r1@25
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( v203935C )
  {
    DestroySprite(a1);
  }
  else
  {
    ++*(_WORD *)(a1 + 60);
    v2 = *(_WORD *)(a1 + 46);
    if ( v2 > 0xA )
    {
def_8145512:
      *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
      *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (*(_WORD *)(v1 + 48) & 0x1F);
      *(_WORD *)(v1 + 50) = 16;
      SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, 4096, 0, 0, 4096);
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      *(_WORD *)(v1 + 46) = 1;
    }
    else
    {
      switch ( v2 )
      {
        default:
          goto def_8145512;
        case 1u:
          if ( (signed int)*(_WORD *)(v1 + 50) > 255 )
          {
            ++*(_WORD *)(v1 + 46);
          }
          else
          {
            *(_WORD *)(v1 + 50) += 8;
            SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, 0x10000 / *(_WORD *)(v1 + 50), 0, 0, 0x10000 / *(_WORD *)(v1 + 50));
          }
          v3 = *(_WORD *)(v1 + 48);
          if ( v3 != 2 )
          {
            if ( v3 > 2 )
            {
              if ( v3 == 3 )
              {
                if ( !(*(_WORD *)(v1 + 60) & 3) )
                  ++*(_WORD *)(v1 + 34);
                *(_WORD *)(v1 + 32) += 2;
              }
            }
            else if ( v3 == 1 )
            {
              if ( !(*(_WORD *)(v1 + 60) & 3) )
                ++*(_WORD *)(v1 + 34);
              *(_WORD *)(v1 + 32) -= 2;
            }
          }
          break;
        case 2u:
          if ( *(_WORD *)(v1 + 52) )
          {
            --*(_WORD *)(v1 + 52);
          }
          else
          {
            v4000050 = 3904;
            v4000052 = 16;
            *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 4;
            *(_WORD *)(v1 + 52) = 16;
            ++*(_WORD *)(v1 + 46);
          }
          break;
        case 3u:
          if ( *(_WORD *)(v1 + 52) )
          {
            v4 = *(_WORD *)(v1 + 52) - 1;
            *(_WORD *)(v1 + 52) = v4;
            v4000052 = v4 + ((16 - *(_WORD *)(v1 + 52)) << 8);
          }
          else
          {
            *(_BYTE *)(v1 + 62) |= 4u;
            *(_WORD *)(v1 + 46) = 10;
          }
          break;
        case 0xAu:
          v4000050 = 0;
          v4000052 = 0;
          DestroySprite(v1);
          break;
      }
    }
  }
  return v6;
}
