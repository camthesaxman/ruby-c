int __fastcall sub_80476E0(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  char *v3; // r4@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == 11 )
    audio_play(60);
  v3 = &gSprites[68 * (*(_WORD *)(v1 + 46) & 0xFF)];
  if ( v3[63] & 0x20 )
  {
    StartSpriteAnim(v1, 2);
    v3[62] |= 4u;
    *(_WORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 28) = sub_8047754;
  }
  else
  {
    *((_WORD *)v3 + 24) += 96;
    *((_WORD *)v3 + 19) = -*((_WORD *)v3 + 24) >> 8;
  }
  return v5;
}
