int __fastcall sub_80A27A8(int a1, int a2)
{
  signed int v2; // r0@1
  signed int v3; // r1@1
  unsigned int v4; // r6@1
  int v5; // r4@1
  unsigned int v6; // r7@1
  int v7; // r5@1
  int v8; // r1@1
  __int16 v9; // r2@23
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1 << 16;
  v3 = a2 << 16;
  v4 = (unsigned int)v2 >> 16;
  v5 = v2 >> 16;
  v6 = (unsigned int)v3 >> 16;
  v7 = v3 >> 16;
  v8 = MapGridGetMetatileIdAt(v2 >> 16, v3 >> 16);
  if ( v8 > 519 )
  {
    if ( v8 != 530 )
    {
      if ( v8 > 530 )
      {
        if ( v8 == 642 )
        {
          v9 = 634;
        }
        else if ( v8 > 642 )
        {
          if ( v8 != 643 )
            return v11;
          v9 = 635;
        }
        else
        {
          if ( v8 != 641 )
            return v11;
          v9 = 633;
        }
        goto _080A286E;
      }
      if ( v8 == 520 )
      {
_080A2834:
        MapGridSetMetatileIdAt((signed __int16)v4, (signed __int16)v6, 1);
        return v11;
      }
      if ( v8 != 522 )
        return v11;
    }
    MapGridSetMetatileIdAt((signed __int16)v4, (signed __int16)v6, 536);
    return v11;
  }
  if ( v8 >= 518 )
  {
    v9 = 625;
_080A286E:
    MapGridSetMetatileIdAt(v5, v7, v9);
    return v11;
  }
  if ( v8 == 37 )
  {
    MapGridSetMetatileIdAt(v5, v7, 14);
    return v11;
  }
  if ( v8 > 37 )
  {
    if ( v8 == 454 )
    {
      v9 = 462;
    }
    else
    {
      if ( v8 != 455 )
        return v11;
      v9 = 463;
    }
    goto _080A286E;
  }
  if ( v8 == 13 || v8 == 21 )
    goto _080A2834;
  return v11;
}
