int __fastcall HighlightCurrentMenuItem(unsigned __int8 a1, unsigned __int8 a2)
{
  signed __int16 v2; // r2@6
  signed __int16 v3; // r0@7
  int v5; // [sp+4h] [bp-4h]@0

  v4000040 = 2535;
  if ( a1 == 1 )
  {
    if ( a2 != 1 )
    {
      if ( (signed int)a2 > 1 && a2 == 2 )
        v2 = 24959;
      else
        v2 = 319;
      goto LABEL_22;
    }
    v3 = 16735;
  }
  else if ( (signed int)a1 > 1 && a1 == 2 )
  {
    if ( a2 == 1 )
    {
      v2 = 16735;
      goto LABEL_22;
    }
    if ( (signed int)a2 > 1 )
    {
      if ( a2 == 2 )
      {
        v3 = 24959;
        goto LABEL_23;
      }
      if ( a2 == 3 )
      {
        v2 = -32353;
        goto LABEL_22;
      }
    }
    v3 = 319;
  }
  else
  {
    if ( !a2 || a2 != 1 )
    {
      v2 = 287;
LABEL_22:
      v3 = v2;
      goto LABEL_23;
    }
    v3 = 8511;
  }
LABEL_23:
  v4000044 = v3;
  return v5;
}
