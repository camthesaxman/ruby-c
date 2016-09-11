int __fastcall sub_8088A30(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( FieldObjectCheckIfSpecialAnimFinishedOrInactive(&dword_30048A0[9 * v202E85D]) << 24 )
  {
    v202FF84 = *(_WORD *)(v1 + 38) | 0x80000000;
    FieldEffectStart(0x3Bu);
    ++*(_WORD *)(v1 + 8);
  }
  return v3;
}
