int __fastcall sub_8088CF8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v202E85D]) << 24 )
  {
    ++*(_WORD *)(v1 + 8);
    v202FF84 = *(_WORD *)(v1 + 10);
    FieldEffectStart(0x3Bu);
  }
  return v3;
}
