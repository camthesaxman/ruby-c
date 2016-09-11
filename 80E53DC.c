signed int __fastcall CheckMovementInputAcroBikeChangingDirection(_BYTE *a1)
{
  _BYTE *v1; // r5@1
  signed int result; // r0@2
  int v3; // r6@3
  int v4; // r0@3

  v1 = a1;
  *a1 = v202E861;
  ++v202E862;
  if ( v202E862 <= 6u )
  {
    v3 = (unsigned __int8)player_get_direction_upper_nybble();
    v4 = (unsigned __int8)sub_80E5C2C();
    if ( *v1 == v4 )
    {
      sub_80E6024(v4);
      v202E863 = 1;
      if ( *v1 == (unsigned __int8)GetOppositeDirection(v3) )
      {
        v202E860 = 6;
        result = 9;
      }
      else
      {
        v202E85A = 2;
        v202E860 = 5;
        result = 8;
      }
    }
    else
    {
      *v1 = v3;
      result = 0;
    }
  }
  else
  {
    v202E85A = 1;
    v202E860 = 0;
    sub_80E6024(0);
    result = 1;
  }
  return result;
}
