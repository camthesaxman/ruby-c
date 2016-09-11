signed int __fastcall CheckMovementInputAcroBikeBunnyHop(unsigned __int8 *a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned __int8 *v3; // r6@1
  unsigned __int16 v4; // r9@1
  unsigned __int16 v5; // r8@1
  unsigned __int8 v6; // r5@1
  int *v7; // r7@1
  signed int result; // r0@3
  int v9; // r0@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = player_get_direction_upper_nybble();
  v7 = &dword_30048A0[9 * v202E85D];
  if ( v5 & 2 )
  {
    v9 = *v3;
    if ( *v3 )
    {
      if ( v9 == v6 || v202E85A == 2 )
      {
        v202E85A = 2;
        return 7;
      }
      LOBYTE(v9) = 1;
    }
    else
    {
      *v3 = v6;
    }
    v202E85A = v9;
    return 6;
  }
  sub_80E6024(0);
  if ( (unsigned __int8)MetatileBehavior_IsBumpySlope(*((_BYTE *)v7 + 30)) )
  {
    v202E860 = 2;
    result = (unsigned __int8)CheckMovementInputAcroBike((int)v3, v4, v5);
  }
  else
  {
    *v3 = v6;
    v202E85A = 0;
    v202E860 = 0;
    result = 4;
  }
  return result;
}
