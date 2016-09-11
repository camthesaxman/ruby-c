int __fastcall sub_80D2ABC(int a1)
{
  int v1; // r4@1
  int v2; // r1@3
  signed int v3; // r0@3
  int v4; // r0@5
  int v5; // r1@8
  int v6; // r0@13
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 52) )
  {
    *(_WORD *)(a1 + 32) += word_3004B00[0];
    *(_WORD *)(a1 + 34) += word_3004B02;
    StartSpriteAnim(a1, 0);
    *(_BYTE *)(v1 + 67) = sub_8079E90(v202F7C9) - 1;
    *(_WORD *)(v1 + 50) = 1;
  }
  *(_WORD *)(v1 + 46) += *(_WORD *)(v1 + 50);
  v2 = 4 * *(_WORD *)(v1 + 46);
  v3 = 4 * *(_WORD *)(v1 + 46);
  if ( *(_WORD *)(v1 + 46) & 0x20000000 )
    v3 = v2 + 255;
  v4 = v2 - (v3 >> 8 << 8);
  *(_WORD *)(v1 + 48) = v4;
  if ( v4 & 0x8000 )
    *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 30 - *(_WORD *)(v1 + 46) / 4);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 10 - *(_WORD *)(v1 + 46) / 8);
  if ( (signed int)*(_WORD *)(v1 + 48) > 128 )
  {
    v5 = *(_WORD *)(v1 + 50);
    if ( (signed int)*(_WORD *)(v1 + 50) > 0 )
      *(_WORD *)(v1 + 50) = -1;
  }
  if ( !*(_WORD *)(v1 + 48) && (signed int)*(_WORD *)(v1 + 50) < 0 )
    *(_WORD *)(v1 + 50) = 1;
  v6 = *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v6 + 1;
  if ( ((v6 - 9) & 0xFFFFu) <= 0x46 )
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  else
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (*(_WORD *)(v1 + 46) % 2 & 1);
  if ( (signed int)*(_WORD *)(v1 + 52) > 90 )
    move_anim_8072740(v1);
  return v8;
}
