void *ExpandPlaceholder_KunChan()
{
  void *result; // r0@2

  if ( v2024EAC )
    result = &gExpandedPlaceholder_Chan;
  else
    result = &gExpandedPlaceholder_Kun;
  return result;
}
