signed int __fastcall sub_8087298(int a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_WORD *)(a3 + 38) = 0;
  *(_WORD *)(a1 + 14) = 1;
  v202FF84 = *(_WORD *)(a2 + 16);
  v202FF88 = *(_WORD *)(a2 + 18);
  v202FF8C = *(_BYTE *)(a3 + 67) - 1;
  v202FF90 = (unsigned int)*(_BYTE *)(a3 + 5) << 28 >> 30;
  FieldEffectStart(0x32u);
  audio_play(0xB2u);
  ++*(_WORD *)(v3 + 8);
  return 1;
}
