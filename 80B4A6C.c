int WaterBerryTree()
{
  int result; // r0@2

  if ( (_UNKNOWN *)GetFieldObjectScriptPointerForComparison() == &BerryTreeScript )
    result = (unsigned __int8)FieldObjectInteractionWaterBerryTree();
  else
    result = 0;
  return result;
}
