int __fastcall sub_80B9F3C(unsigned __int16 *a1, int a2)
{
  __int16 *v2; // r4@1
  unsigned __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v2 = (__int16 *)a1;
  if ( a2 << 24 )
  {
    v3 = *a1;
    if ( *v2 )
    {
      if ( (unsigned __int8)sub_80A9670(v3) == 5 )
      {
        if ( sub_80A92D4(*v2, 1u) << 24 || sub_80A9718(*v2, 1u) << 24 || !(sub_80A9424(*v2, 1u) << 24) )
        {
          VarSet(0x4001u, 0);
        }
        else
        {
          VarSet(0x4001u, *v2);
          StringCopy(&gStringVar1, byte_3002978);
          if ( *v2 == 275 )
            FlagSet(0x853u);
        }
      }
      else if ( (unsigned __int8)sub_80A9424(*v2, 1u) == 1 )
      {
        VarSet(0x4001u, *v2);
        StringCopy(&gStringVar1, byte_3002978);
      }
      else
      {
        VarSet(0x4001u, 0);
      }
    }
  }
  return v5;
}
