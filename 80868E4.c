int __fastcall sub_80868E4(int a1)
{
  int v1; // r4@1
  int *v2; // r6@1
  char *v3; // r5@1
  __int16 v4; // r2@1
  __int16 v5; // r0@2
  __int16 v6; // r2@4

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = &gSprites[68 * v202E85C];
  *((_WORD *)v3 + 19) += *(_WORD *)(a1 + 10);
  v4 = *(_WORD *)(a1 + 10);
  if ( (signed int)*(_WORD *)(a1 + 10) <= 7 )
  {
    v5 = v4 + *(_WORD *)(a1 + 12);
    *(_WORD *)(v1 + 12) = v5;
    if ( v5 & 0xF )
      *(_WORD *)(v1 + 10) = 2 * v4;
  }
  v6 = *(_WORD *)(v1 + 14);
  if ( !*(_WORD *)(v1 + 14) && (signed int)*((_WORD *)v3 + 19) >= -16 )
  {
    *(_WORD *)(v1 + 14) = 1;
    *((_BYTE *)v2 + 3) &= 0xFBu;
    v3[66] = v3[66] & 0x3F | (*(_BYTE *)(v1 + 16) << 6);
    *(_BYTE *)v2 |= 4u;
  }
  if ( (signed int)*((_WORD *)v3 + 19) >= 0 )
  {
    audio_play(0xD6u);
    *(_BYTE *)v2 |= 0x28u;
    *((_WORD *)v3 + 19) = 0;
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
