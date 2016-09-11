int __fastcall sub_810E508(int a1, char a2, char a3)
{
  signed __int16 v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v3 = 0;
  if ( a1 << 16 )
  {
    if ( v202E8CC )
    {
      if ( v202E8CC == 1 )
      {
        v3 = 602;
      }
      else if ( v202E8CC == 2 )
      {
        v3 = 601;
      }
    }
    else
    {
      v3 = 4;
    }
  }
  else if ( v202E8CC )
  {
    if ( v202E8CC == 1 )
    {
      v3 = 639;
    }
    else if ( v202E8CC == 2 )
    {
      v3 = 638;
    }
  }
  else
  {
    v3 = 5;
  }
  MapGridSetMetatileIdAt(v2025734 + a2 + 7, v2025736 + a3 + 7, v3 | 0xC00);
  return v5;
}
