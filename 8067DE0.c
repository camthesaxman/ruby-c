int __fastcall sub_8067DE0(int a1)
{
  int v1; // r6@1
  _BYTE *v2; // r0@1
  int v3; // r8@1
  unsigned __int16 v4; // r0@1
  unsigned __int8 v5; // r5@1
  unsigned __int16 v6; // r0@1
  unsigned __int8 v7; // r4@1
  unsigned __int16 v8; // r0@1
  unsigned __int8 v9; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v4 = script_read_halfword(v1);
  v5 = VarGet(v4);
  v6 = script_read_halfword(v1);
  v7 = VarGet(v6);
  v8 = script_read_halfword(v1);
  v9 = VarGet(v8);
  sub_810E7AC(v3, v5, v7, v9);
  return 0;
}
