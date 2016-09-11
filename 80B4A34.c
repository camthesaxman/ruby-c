int IsPlayerFacingPlantedBerryTree()
{
  unsigned __int8 v0; // r0@2
  int result; // r0@3

  result = 0;
  if ( (_UNKNOWN *)GetFieldObjectScriptPointerForComparison() == &BerryTreeScript )
  {
    v0 = FieldObjectGetBerryTreeId(byte_3004AE0);
    if ( !(GetStageByBerryTreeId(v0) << 24) )
      result = 1;
  }
  return result;
}
