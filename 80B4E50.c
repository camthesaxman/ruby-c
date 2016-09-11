int FieldObjectInteractionGetBerryTreeData()
{
  int v0; // r5@1
  unsigned __int8 v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)FieldObjectGetBerryTreeId(byte_3004AE0);
  v1 = GetBerryTypeByBerryTreeId(v0);
  ResetBerryTreeSparkleFlag(v0);
  if ( sub_8060234(v202E8DE, v2025739, v2025738) << 24 )
    v202E8CC = 255;
  else
    v202E8CC = (unsigned __int8)GetStageByBerryTreeId(v0);
  v202E8CE = GetNumStagesWateredByBerryTreeId(v0);
  v202E8CE = v202E8CE;
  v202E8D0 = GetBerryCountByBerryTreeId(v0);
  v202E8D0 = v202E8D0;
  GetBerryNameByBerryType(v1, (int)&gStringVar1);
  return v3;
}
