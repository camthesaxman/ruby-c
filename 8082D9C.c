signed int __fastcall sub_8082D9C(unsigned __int8 a1, unsigned __int8 a2)
{
  signed int v2; // r4@1
  signed int v3; // r5@1
  signed int v4; // r0@1
  signed int v5; // r1@7
  signed int result; // r0@9

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)GetLinkPlayerDataExchangeStatusTimed();
  if ( v4 == 2 )
    return 0;
  if ( v4 > 2 )
  {
    if ( v4 == 3 )
      return 3;
    return 0;
  }
  if ( v4 != 1 )
    return 0;
  v5 = (unsigned __int8)GetLinkPlayerCount_2();
  if ( v2 > v5 || v5 > v3 )
  {
    ConvertIntToDecimalStringN(&gStringVar1, v5, 0, 1);
    result = 4;
  }
  else
  {
    result = 1;
  }
  return result;
}
