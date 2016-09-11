int __fastcall sub_80A28F4(__int16 a1, int a2)
{
  __int16 v2; // r10@1
  signed int v3; // r1@1
  unsigned int v4; // r9@1
  unsigned int v5; // r4@1
  int v6; // r7@1
  signed int v7; // r4@2
  int v8; // r6@2
  int v9; // r5@2
  signed int v10; // r8@2
  signed int v11; // r0@3
  int v12; // r4@15
  int v14; // [sp+1Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 16;
  v4 = (unsigned int)(v3 + 196608) >> 16;
  v5 = 0;
  v6 = v3 >> 16;
  do
  {
    v7 = v5 << 16;
    v8 = (v2 + (v7 >> 16)) & 0xFFFF;
    v9 = (signed __int16)(v2 + HIWORD(v7));
    v10 = v7;
    if ( MapGridGetMetatileIdAt(v9, v6) == 21 )
    {
      v11 = (unsigned __int8)sub_80A28A0(v9, v6 + 1);
      if ( v11 == 2 )
      {
        MapGridSetMetatileIdAt(v9, v6 + 1, 641);
      }
      else if ( v11 > 2 )
      {
        if ( v11 == 3 )
        {
          MapGridSetMetatileIdAt(v9, v6 + 1, 642);
        }
        else if ( v11 == 4 )
        {
          MapGridSetMetatileIdAt(v9, v6 + 1, 643);
        }
      }
      else if ( v11 == 1 )
      {
        MapGridSetMetatileIdAt(v9, v6 + 1, 520);
      }
    }
    if ( MapGridGetMetatileIdAt((signed __int16)v8, (signed __int16)v4) == 1 )
    {
      v12 = (signed __int16)v4 + 1;
      if ( MapGridGetMetatileIdAt((signed __int16)v8, v12) == 520 )
        MapGridSetMetatileIdAt((signed __int16)v8, v12, 1);
      if ( MapGridGetMetatileIdAt((signed __int16)v8, v12) == 641 )
        MapGridSetMetatileIdAt((signed __int16)v8, v12, 633);
      if ( MapGridGetMetatileIdAt((signed __int16)v8, v12) == 642 )
        MapGridSetMetatileIdAt((signed __int16)v8, v12, 634);
      if ( MapGridGetMetatileIdAt((signed __int16)v8, v12) == 643 )
        MapGridSetMetatileIdAt((signed __int16)v8, v12, 635);
    }
    v5 = (unsigned int)(v10 + 0x10000) >> 16;
  }
  while ( (v10 + 0x10000) >> 16 <= 2 );
  return v14;
}
