signed int __fastcall CheckMovementInputAcroBikeMovingWheelie(_BYTE *a1, unsigned __int16 a2, unsigned __int16 a3)
{
  _BYTE *v3; // r6@1
  unsigned __int16 v4; // r10@1
  unsigned __int16 v5; // r8@1
  unsigned __int8 v6; // r0@1
  int v7; // r5@1
  int v8; // r2@1
  int *v9; // r7@1
  signed int result; // r0@7
  int v11; // r0@10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = player_get_direction_lower_nybble();
  v7 = v6;
  v8 = v6;
  v9 = &dword_30048A0[9 * v202E85D];
  if ( v5 & 2 )
  {
    v11 = *v3;
    if ( *v3 )
    {
      if ( v8 == v11 || v202E85A == 2 )
      {
        v202E85A = 2;
        result = 10;
      }
      else
      {
        v202E85A = 0;
        result = 5;
      }
    }
    else
    {
      *v3 = v7;
      v202E860 = 2;
      v202E85A = v11;
      sub_80E6024(v11);
      result = 5;
    }
  }
  else
  {
    sub_80E6024(0);
    if ( (unsigned __int8)MetatileBehavior_IsBumpySlope(*((_BYTE *)v9 + 30)) )
    {
      v202E860 = 2;
      result = (unsigned __int8)CheckMovementInputAcroBike((int)v3, v4, v5);
    }
    else
    {
      v202E860 = 0;
      if ( !*v3 )
      {
        *v3 = v7;
_080E560A:
        v202E85A = 0;
        return 4;
      }
      if ( *v3 != v7 && v202E85A != 2 )
        goto _080E560A;
      v202E85A = 2;
      result = 12;
    }
  }
  return result;
}
