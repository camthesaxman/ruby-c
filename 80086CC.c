signed int IsSioMultiMaster()
{
  signed int v0; // r3@1

  v0 = 0;
  if ( v4000128 & 8 && !(v4000128 & 4) )
    v0 = 1;
  return v0;
}
