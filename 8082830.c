char *sub_8082830()
{
  void *v0; // r0@2
  unsigned __int8 *v1; // r0@4

  if ( v202FF5E == 1024 )
    v0 = (void *)sub_80BCCE8();
  else
    v0 = (void *)v202FF68;
  v1 = (unsigned __int8 *)ReturnEmptyStringIfNull(v0);
  StringExpandPlaceholders(&gStringVar4, v1);
  return &gStringVar4;
}
