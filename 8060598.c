int __fastcall FieldObjectForceSetSpecialAnim(_BYTE *a1, char a2)
{
  _BYTE *v2; // r5@1
  char v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  FieldObjectClearAnimIfSpecialAnimActive(a1);
  FieldObjectSetSpecialAnim(v2, v3);
  return v5;
}
