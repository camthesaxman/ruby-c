int CheckMasterOrSlave()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (v4000128 & 0xC) != 8 || byte_3003072 )
    gLink = 0;
  else
    gLink = 8;
  return v1;
}
