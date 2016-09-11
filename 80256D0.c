int sub_80256D0()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2024DB8 & 7 )
  {
    v2024C68 |= 1u;
    v2024D23 = 2;
  }
  else
  {
    v2024DB8 = 1;
    v2024D23 = 0;
    v2024DE4 = 5;
  }
  ++v2024C10;
  return v1;
}
