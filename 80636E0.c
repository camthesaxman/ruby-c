int __fastcall FieldObjectUpdateMetatileBehaviors(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 31) = MapGridGetMetatileBehaviorAt(*(_WORD *)(a1 + 20), *(_WORD *)(a1 + 22));
  *(_BYTE *)(v1 + 30) = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 16), *(_WORD *)(v1 + 18));
  return v3;
}
