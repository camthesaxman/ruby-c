int __fastcall sub_8085054(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v4; // r2@3
  int v5; // r1@5
  unsigned int v7; // [sp+0h] [bp-Ch]@1

  v2 = a2;
  v7 = 16 * a1;
  if ( TestPlayerAvatarFlags(6u) << 24 )
    v7 = 80 * v7 / 0x64;
  affects_encounter_rate_based_on_flags(&v7, v3);
  ApplyCleanseTagWildEncounterRateReduction(&v7);
  if ( !v2 && !GetMonData((int)dword_3004360, 6, v4) )
  {
    v5 = (unsigned __int8)GetMonAbility((int)dword_3004360);
    if ( v5 == 1 )
      v7 >>= 1;
    if ( v5 == 35 )
      v7 *= 2;
  }
  if ( v7 > 0xB40 )
    v7 = 2880;
  return (unsigned __int8)DoWildEncounterRateDiceRoll(v7);
}
