int GetMomOrDadStringForTVMessage()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2025738 == 1 )
  {
    if ( v2024EAC )
    {
      if ( v2025739 == 2 )
      {
        StringCopy(&gStringVar1, &gUnknown_0840FF36);
        VarSet(0x4003u, 1);
      }
    }
    else if ( !v2025739 )
    {
      StringCopy(&gStringVar1, &gUnknown_0840FF36);
      VarSet(0x4003u, 1);
    }
  }
  if ( (unsigned __int16)VarGet(16387) == 1 )
    goto _080BFCAA;
  if ( (unsigned __int16)VarGet(16387) == 2 )
  {
_080BFCC0:
    StringCopy(&gStringVar1, &gUnknown_0840FF32);
    return v1;
  }
  if ( (unsigned __int16)VarGet(16387) > 2u )
  {
    if ( !(VarGet(16387) & 1) )
    {
_080BFCAA:
      StringCopy(&gStringVar1, &gUnknown_0840FF36);
      return v1;
    }
    goto _080BFCC0;
  }
  if ( Random() & 1 )
  {
    StringCopy(&gStringVar1, &gUnknown_0840FF36);
    VarSet(0x4003u, 1);
  }
  else
  {
    StringCopy(&gStringVar1, &gUnknown_0840FF32);
    VarSet(0x4003u, 2);
  }
  return v1;
}
