int __fastcall DoRippleFieldEffect(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  v202FF84 = *(_WORD *)(v2 + 32);
  v202FF88 = *(_WORD *)(v2 + 34) + (*(_WORD *)(v3 + 10) << 16 >> 17) - 2;
  v202FF8C = 151;
  v202FF90 = 3;
  FieldEffectStart(5);
  return v5;
}
