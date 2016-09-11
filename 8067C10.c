int __fastcall sA2_setmaptile(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v3; // r6@1
  unsigned __int16 v4; // r0@1
  int v5; // r5@1
  unsigned __int16 v6; // r0@1
  __int16 v7; // r7@1
  unsigned __int16 v8; // r0@1
  int v9; // r6@1
  int v10; // r5@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)VarGet(v2);
  v4 = script_read_halfword(v1);
  v5 = (unsigned __int16)VarGet(v4);
  v6 = script_read_halfword(v1);
  v7 = VarGet(v6);
  v8 = script_read_halfword(v1);
  v9 = (v3 + 7) & 0xFFFF;
  v10 = (v5 + 7) & 0xFFFF;
  if ( VarGet(v8) << 16 )
    MapGridSetMetatileIdAt(v9, v10, v7 | 0xC00);
  else
    MapGridSetMetatileIdAt(v9, v10, v7);
  return 0;
}
