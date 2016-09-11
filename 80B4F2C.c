int FieldObjectInteractionPickBerryTree()
{
  unsigned __int8 v0; // r0@1
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  unsigned __int16 v3; // r4@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = FieldObjectGetBerryTreeId(byte_3004AE0);
  v1 = v0;
  v2 = GetBerryTypeByBerryTreeId(v0);
  v3 = BerryTypeToItemId(v2);
  v4 = GetBerryCountByBerryTreeId(v1);
  v202E8CC = sub_80A9424(v3, v4);
  v202E8CC = v202E8CC;
  return v6;
}
