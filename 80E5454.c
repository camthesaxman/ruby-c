signed int __fastcall CheckMovementInputAcroBikeStandingWheelie(_BYTE *a1, int a2, char a3)
{
  _BYTE *v3; // r7@1
  char v4; // r4@1
  int v5; // r6@1
  signed int result; // r0@3

  v3 = a1;
  v4 = a3;
  v5 = (unsigned __int8)player_get_direction_upper_nybble();
  v202E85A = 0;
  if ( v4 & 2 )
  {
    ++v202E862;
  }
  else
  {
    v202E862 = 0;
    if ( !(unsigned __int8)MetatileBehavior_IsBumpySlope(BYTE2(dword_30048A0[9 * v202E85D + 7])) )
    {
      *v3 = v5;
      v202E860 = 0;
      sub_80E6024(0);
      return 4;
    }
  }
  if ( v202E862 <= 0x27u )
  {
    if ( *v3 == v5 )
    {
      v202E85A = 2;
      v202E860 = 4;
      sub_80E6024(4);
      result = 10;
    }
    else
    {
      if ( *v3 )
        v202E85A = 1;
      else
        *v3 = v5;
      result = 5;
    }
  }
  else
  {
    *v3 = v5;
    v202E860 = 3;
    sub_80E6024(3);
    result = 6;
  }
  return result;
}
