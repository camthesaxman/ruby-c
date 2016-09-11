int __fastcall sA9_unknown(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  unsigned __int8 v3; // r0@1
  unsigned __int8 *v4; // r3@1
  unsigned __int8 v5; // r2@1
  unsigned __int8 v6; // r1@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = *(unsigned __int8 **)(v1 + 8);
  v5 = *v4++;
  *(_DWORD *)(v1 + 8) = v4;
  v6 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  sub_805BD48(v3, v6, v5);
  return 0;
}
