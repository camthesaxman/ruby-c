int __fastcall sub_8046984(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  __int16 v3; // r0@3
  __int16 v4; // r0@5
  int v5; // r0@10
  int v6; // r0@10
  int v7; // r1@10
  __int16 v8; // r0@17
  int v10; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) & 0xFF;
  if ( v2 > 4 )
  {
def_804699A:
    v8 = *(_WORD *)(a1 + 56) + 1;
    *(_WORD *)(v1 + 56) = v8;
    if ( v8 == 31 )
    {
      *(_WORD *)(v1 + 56) = 0;
      *(_WORD *)(v1 + 52) &= 0xFF00u;
      StartSpriteAffineAnim(v1, 3);
      if ( (signed int)*(_WORD *)(v1 + 54) >= 0 )
        StartSpriteAffineAnim(v1, 1);
      else
        StartSpriteAffineAnim(v1, 2);
      audio_play(23);
    }
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
      case 2u:
        v3 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v1 + 36) += v3;
        *(_WORD *)(v1 + 56) += v3;
        *(_BYTE *)(v1 + 44) &= 0x7Fu;
        if ( ((*(_WORD *)(v1 + 56) + 3) & 0xFFFFu) > 6 )
        {
          ++*(_WORD *)(v1 + 52);
          *(_WORD *)(v1 + 56) = 0;
        }
        break;
      case 1u:
        v4 = *(_WORD *)(a1 + 56) + 1;
        *(_WORD *)(v1 + 56) = v4;
        if ( v4 == 1 )
        {
          *(_WORD *)(v1 + 56) = 0;
          *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 54);
          ++*(_WORD *)(v1 + 52);
          *(_BYTE *)(v1 + 44) &= 0x7Fu;
          if ( (signed int)*(_WORD *)(v1 + 54) >= 0 )
            ChangeSpriteAffineAnim(v1, 1);
          else
            ChangeSpriteAffineAnim(v1, 2);
        }
        else
        {
          *(_BYTE *)(v1 + 44) |= 0x80u;
        }
        break;
      case 3u:
        v5 = *(_WORD *)(a1 + 52) + 256;
        *(_WORD *)(v1 + 52) = v5;
        v6 = v5 << 16 >> 24;
        v7 = *(_WORD *)(v1 + 60);
        if ( v6 == v7 )
        {
          *(_DWORD *)(v1 + 28) = sub_8046C78;
        }
        else
        {
          if ( v7 != 4 || v6 != 3 )
            ++*(_WORD *)(v1 + 52);
          else
            *(_DWORD *)(v1 + 28) = sub_8046E7C;
          *(_BYTE *)(v1 + 44) |= 0x80u;
        }
        break;
      default:
        goto def_804699A;
    }
  }
  return v10;
}
