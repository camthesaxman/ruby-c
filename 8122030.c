signed int __fastcall sub_8122030(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  int v6; // r3@8
  __int16 *v7; // r1@9

  v3 = a1;
  if ( GetMonData(a1, 45, a3) )
    return 0;
  if ( !v201B263 )
  {
    if ( GetMonData(v3, 57, v4) )
      return 1;
    return 0;
  }
  if ( !(v20253F8 & 1) && (unsigned int)GetMonData(v3, 56, v4) > 0x32 )
    return 0;
  v6 = (unsigned __int16)GetMonData(v3, 11, v4);
  if ( (unsigned __int16)gBattleTowerBanlist != 0xFFFF )
  {
    v7 = &gBattleTowerBanlist;
    while ( (unsigned __int16)*v7 != v6 )
    {
      ++v7;
      if ( (unsigned __int16)*v7 == 0xFFFF )
        return 1;
    }
    return 0;
  }
  return 1;
}
