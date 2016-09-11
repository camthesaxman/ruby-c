int sub_8108AEC()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2024DB8 & 7 )
    v2016808 = 1;
  if ( v2024DB8 & 0x18 )
    v2016808 = 2;
  if ( v2024DB8 & 0x60 )
    v2016808 = 0;
  if ( v2024DB8 & 0x80 )
    v2016808 = 3;
  ++v2039238;
  return v1;
}
