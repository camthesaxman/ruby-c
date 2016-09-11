signed int __fastcall sub_80E5E70(int a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int8 v3; // r5@1
  _BOOL4 v4; // r0@3

  v2 = a2;
  v3 = a2;
  if ( (unsigned int)((a1 << 24) - 50331648) >> 24 <= 1 )
  {
    if ( !(MetatileBehavior_IsIsolatedVerticalRail(a2) << 24) )
    {
      v4 = MetatileBehavior_IsVerticalRail(v2);
      goto _080E5EAC;
    }
    return 0;
  }
  if ( MetatileBehavior_IsIsolatedHorizontalRail(a2) << 24 )
    return 0;
  v4 = MetatileBehavior_IsHorizontalRail(v3);
_080E5EAC:
  if ( v4 << 24 )
    return 0;
  return 1;
}
