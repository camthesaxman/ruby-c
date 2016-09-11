int sub_80972A8()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(sub_809B130() << 24) )
    {
      if ( v203847C )
        sub_8096BE0((int)sub_8097858);
      else
        sub_8096BE0((int)sub_8096C84);
    }
  }
  else
  {
    sub_809B100(0);
    ++v2000004;
  }
  return v1;
}
