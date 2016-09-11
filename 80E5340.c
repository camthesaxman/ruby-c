signed int __fastcall CheckMovementInputAcroBikeNormal(_BYTE *a1, unsigned __int16 a2, unsigned __int16 a3)
{
  _BYTE *v3; // r4@1
  unsigned __int16 v4; // r6@1
  unsigned __int16 v5; // r5@1
  int v6; // r3@1
  int v7; // r1@1
  signed int result; // r0@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int8)player_get_direction_upper_nybble();
  v202E862 = 0;
  v7 = *v3;
  if ( *v3 )
  {
    if ( v7 == v6 )
    {
      if ( v5 & 2 && !v202E863 )
      {
        ++v202E863;
        v202E860 = 4;
        return 11;
      }
      if ( *v3 == v6 )
        goto LABEL_15;
    }
    if ( v202E85A == 2 )
    {
LABEL_15:
      result = 2;
      v202E85A = 2;
    }
    else
    {
      v202E860 = 1;
      v202E861 = *v3;
      v202E85A = 0;
      result = (unsigned __int8)CheckMovementInputAcroBike((int)v3, v4, v5);
    }
  }
  else if ( v4 & 2 )
  {
    *v3 = v6;
    v202E85A = v7;
    v202E860 = 2;
    result = 3;
  }
  else
  {
    *v3 = v6;
    v202E85A = v7;
    result = 0;
  }
  return result;
}
