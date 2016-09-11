int sub_810E5A8()
{
  char v0; // r6@1
  char v1; // r5@1
  signed __int16 v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = (unsigned __int8)player_get_direction_lower_nybble();
  if ( v3 == 3 )
  {
    v0 = -1;
    goto _0810E5D8;
  }
  if ( v3 <= 3 )
  {
    if ( v3 != 2 )
      goto _0810E5DA;
    v0 = 0;
_0810E5D8:
    v1 = -1;
    goto _0810E5DA;
  }
  if ( v3 == 4 )
  {
    v0 = 1;
    goto _0810E5D8;
  }
_0810E5DA:
  if ( v202E8CC )
  {
    if ( v202E8CC == 1 )
    {
      v2 = 602;
    }
    else if ( v202E8CC == 2 )
    {
      v2 = 601;
    }
  }
  else
  {
    v2 = 4;
  }
  MapGridSetMetatileIdAt(v2025734 + v0 + 7, v2025736 + v1 + 7, v2 | 0xC00);
  DrawWholeMapView();
  return v5;
}
