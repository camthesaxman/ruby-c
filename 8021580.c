int atk47()
{
  char v0; // r3@1
  int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  v1 = v201601E & 0xF0;
  if ( v1 == 32 )
  {
    v0 = 39;
  }
  else if ( v1 > 32 )
  {
    if ( v1 == 144 )
    {
      v0 = 22;
    }
    else if ( v1 == 160 )
    {
      v0 = 46;
    }
  }
  else if ( v1 == 16 )
  {
    v0 = 15;
  }
  v20160A4 = v0 + (v201601E & 0xF) - 1;
  v20160A5 = 0;
  ++v2024C10;
  return v3;
}
