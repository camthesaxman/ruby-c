int sub_802B1C0()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0) && !(sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24) )
  {
    if ( v2024DB8 )
      v201601F = 2;
    if ( v2024DB8 & 7 )
    {
      v201601C = -117;
    }
    else if ( v2024DB8 & 0x18 )
    {
      v201601C = -123;
    }
    else if ( v2024DB8 & 0x60 )
    {
      v201601C = -118;
    }
    else if ( v2024DB8 & 0x80 )
    {
      v201601C = -113;
    }
    else
    {
      v201601C = -128;
    }
  }
  ++v2024C10;
  return v1;
}
