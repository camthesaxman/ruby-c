int __fastcall DoTracksGroundEffect_BikeTireTracks(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 20) )
  {
    v202FF84 = *(_WORD *)(a1 + 20);
    v202FF88 = *(_WORD *)(a1 + 22);
    v202FF8C = 149;
    v202FF90 = 2;
    v202FF94 = *(&gBikeTireTracks_Transitions[4 * *(_BYTE *)(a1 + 32) - 5] + (*(_BYTE *)(a1 + 24) & 0xF));
    FieldEffectStart(35);
  }
  return v2;
}
