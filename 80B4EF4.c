int FieldObjectInteractionPlantBerryTree()
{
  unsigned __int8 v0; // r4@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = ItemIdToBerryType(v203855E);
  v1 = FieldObjectGetBerryTreeId(byte_3004AE0);
  PlantBerryTree(v1, v0, 1u, 1u);
  FieldObjectInteractionGetBerryTreeData();
  return v3;
}
