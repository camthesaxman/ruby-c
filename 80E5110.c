signed int __fastcall CheckMovementInputMachBike(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  signed int result; // r0@3

  v1 = a1;
  v2 = (unsigned __int8)player_get_direction_upper_nybble();
  v3 = *v1;
  if ( !*v1 )
  {
    *v1 = v2;
    if ( !v202E863 )
    {
      v202E85A = v3;
      return 0;
    }
    goto _080E514C;
  }
  if ( v3 == v2 || v202E85A == 2 )
  {
    result = 2;
  }
  else
  {
    if ( v202E863 )
    {
      *v1 = v2;
_080E514C:
      v202E85A = 2;
      return 3;
    }
    result = 1;
  }
  v202E85A = result;
  return result;
}
