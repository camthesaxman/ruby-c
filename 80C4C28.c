int sub_80C4C28()
{
  signed __int16 v0; // r1@7
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202E8CE == 1 )
  {
    v0 = 4;
  }
  else if ( (signed int)v202E8CE > 1 )
  {
    if ( v202E8CE != 2 )
      goto _080C4C56;
    v0 = 5;
  }
  else
  {
    if ( v202E8CE )
    {
_080C4C56:
      v0 = 100;
      goto _080C4C58;
    }
    v0 = 3;
  }
_080C4C58:
  v202E8CC = v0;
  return v2;
}
