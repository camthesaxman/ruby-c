signed int sub_80A7924()
{
  if ( gLinkOpen != 1 || sub_80A76B8() )
    return 0;
  if ( sub_80A76D0() )
  {
    sub_80A7678();
    return 0;
  }
  sub_80A7694();
  return 2;
}
