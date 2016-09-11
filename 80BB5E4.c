int sub_80BB5E4()
{
  unsigned int i; // r3@1
  int v2; // [sp+4h] [bp-4h]@0

  v202E8DC = 0;
  for ( i = 0; i <= 0x13; i = (i + 1) & 0xFFFF )
  {
    if ( v20387DC == *(_BYTE *)(160 * i + 0x202713C) )
    {
      v202E8DC = 1;
      VarSet(0x4054u, i);
      return v2;
    }
  }
  return v2;
}
