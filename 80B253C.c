int __fastcall sub_80B253C(unsigned __int8 a1)
{
  int *v1; // r1@1
  __int16 v2; // r0@6
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v1 + 6) > 9 )
  {
    if ( *((_WORD *)v1 + 5) )
    {
      if ( !*((_WORD *)v1 + 4) )
      {
        *((_WORD *)v1 + 5) = 0;
        *((_WORD *)v1 + 6) = 0;
        *v1 = (int)sub_80B25A4;
        return v4;
      }
      v2 = *((_WORD *)v1 + 4) - 1;
    }
    else
    {
      if ( *((_WORD *)v1 + 4) == 16 )
      {
        ++*((_WORD *)v1 + 5);
        return v4;
      }
      v2 = *((_WORD *)v1 + 4) + 1;
    }
    *((_WORD *)v1 + 4) = v2;
    return v4;
  }
  ++*((_WORD *)v1 + 6);
  return v4;
}
