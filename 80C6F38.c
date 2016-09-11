int sub_80C6F38()
{
  int v0; // r1@1
  signed __int16 v1; // r0@8
  signed __int16 v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@14

  GetXYCoordsOneStepInFrontOfPlayer(&v3, &v3 + 1);
  v0 = MapGridGetMetatileIdAt(v3, *(&v3 + 1));
  if ( v0 == 757 )
  {
    v1 = 2;
    goto _080C6FF8;
  }
  if ( v0 <= 757 )
  {
    if ( v0 == 734 )
    {
      ConvertIntToDecimalStringN(&gStringVar1, 50, 0, 2);
      StringCopy(&gStringVar2, &gUnknown_0840FAB7);
      v1 = 0;
    }
    else
    {
      if ( v0 != 756 )
        return v4;
      v1 = 1;
    }
    goto _080C6FF8;
  }
  if ( v0 == 758 )
  {
    v1 = 3;
    goto _080C6FF8;
  }
  if ( v0 == 822 )
  {
    ConvertIntToDecimalStringN(&gStringVar1, 100, 0, 3);
    StringCopy(&gStringVar2, &gUnknown_0840FAB2);
    v1 = 0;
_080C6FF8:
    v202E8DC = v1;
  }
  return v4;
}
