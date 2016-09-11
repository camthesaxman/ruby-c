int sub_810F424()
{
  unsigned int v0; // r5@1
  _BYTE *v1; // r4@2

  v0 = (v2028508 & 0x7F) + v202850A + gUnknown_083F83E0[v202E8CC];
  if ( GetPriceReduction(2u) << 24 )
    v1 = &gUnknown_083F83F8;
  else
    v1 = &gUnknown_083F83EC;
  return v1[v0 % 0xC];
}
