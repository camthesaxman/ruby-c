int __fastcall sub_8069A3C(__int16 a1, __int16 a2)
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
    if ( v4 == 591 )
    {
      MapGridSetMetatileIdAt(v2, v3, 590);
    }
    else if ( v4 == 599 )
    {
      MapGridSetMetatileIdAt(v2, v3, 598);
    }
  }
  return v6;
}
