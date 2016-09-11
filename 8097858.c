int sub_8097858()
{
  int v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(sub_8099374() << 24) )
    {
      sub_80987DC(0);
      sub_8096BE0((int)sub_8096C84);
    }
  }
  else
  {
    v0 = party_compaction(v2000004);
    sub_8099310(v0);
    ++v2000004;
  }
  return v2;
}
