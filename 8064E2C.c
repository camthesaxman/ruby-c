int sub_8064E2C()
{
  unsigned __int8 v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  v1 = FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v0]);
  sub_80A2178(v1);
  sub_806451C();
  return v3;
}
