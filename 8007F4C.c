int sub_8007F4C()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( gLinkStatus & 0x20 && (gLinkStatus & 0x1Cu) > 4 )
    gShouldAdvanceLinkState = 1;
  return v1;
}
