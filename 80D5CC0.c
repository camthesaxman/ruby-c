int __fastcall sub_80D5CC0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v3; // r1@3
  int v4; // r2@3
  char *v5; // r1@8
  char v6; // r0@8
  __int16 v7; // r0@11
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 48) = word_3004B00[0];
    *(_WORD *)(a1 + 46) = 1;
  }
  v3 = *(_WORD *)(a1 + 52) + 384;
  *(_WORD *)(a1 + 52) = v3;
  *(_WORD *)(a1 + 54) += 160;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), v3 << 16 >> 24);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 54) << 16 >> 24);
  v4 = (*(_WORD *)(v1 + 48) + 7) & 0xFF;
  *(_WORD *)(v1 + 48) = v4;
  if ( byte_3001BAD & 2 )
  {
    if ( ((v4 - 64) & 0xFFFFu) <= 0x83 )
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v202F7C9) + 1) & 3);
    else
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C9) & 3);
  }
  else
  {
    if ( ((v4 - 64) & 0xFFFFu) <= 0x83 )
    {
      v5 = (char *)(v1 + 67);
      v6 = 31;
    }
    else
    {
      v5 = (char *)(v1 + 67);
      v6 = 29;
    }
    *v5 = v6;
  }
  v7 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v7;
  if ( v7 > 20 )
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
  if ( *(_WORD *)(v1 + 50) == 30 )
    move_anim_8072740(v1);
  return v9;
}
