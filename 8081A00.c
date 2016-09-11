int sub_8081A00()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( GetSafariZoneFlag() )
    sub_8081AA4();
  else
    sub_8081A18();
  return v1;
}
