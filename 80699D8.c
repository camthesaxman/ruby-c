int __fastcall sub_80699D8(__int16 a1, __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@2
  int v6; // [sp+8h] [bp-4h]@0

  LOWORD(v2) = a1;
  LOWORD(v3) = a2;
  if ( !(PlayerGetZCoord() & 1) )
  {
    v2 = (signed __int16)v2;
    v3 = (signed __int16)v3;
    v4 = MapGridGetMetatileIdAt((signed __int16)v2, (signed __int16)v3);
    if ( v4 == 590 )
    {
      MapGridSetMetatileIdAt(v2, v3, 591);
    }
    else if ( v4 == 598 )
    {
      MapGridSetMetatileIdAt(v2, v3, 599);
    }
  }
  return v6;
}
