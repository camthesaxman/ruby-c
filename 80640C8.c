int __fastcall GroundEffect_JumpOnTallGrass(int a1)
{
  int v1; // r5@1
  int v2; // ST00_4@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v202FF84 = *(_WORD *)(a1 + 16);
  v202FF88 = *(_WORD *)(a1 + 18);
  v202FF8C = (unsigned int)*(_BYTE *)(a1 + 11) >> 4;
  v202FF90 = 2;
  FieldEffectStart(12);
  v2 = *(_WORD *)(v1 + 18);
  if ( (sub_8126FF0(*(_BYTE *)(v1 + 8), *(_BYTE *)(v1 + 9), *(_BYTE *)(v1 + 10), *(_WORD *)(v1 + 16)) & 0xFF) == 64 )
    GroundEffect_SpawnOnTallGrass(v1);
  return v4;
}
