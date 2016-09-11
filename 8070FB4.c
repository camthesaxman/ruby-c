int sub_8070FB4()
{
  int v1; // [sp+0h] [bp-4h]@0

  v202E8FD = 0;
  if ( is_c1_link_related_active() == 1 )
  {
    sub_80710A0();
  }
  else if ( GetSafariZoneFlag() == 1 )
  {
    BuildStartMenuActions_SafariZone();
  }
  else
  {
    BuildStartMenuActions_Normal();
  }
  return v1;
}
