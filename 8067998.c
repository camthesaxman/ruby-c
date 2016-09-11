int __fastcall sB6_load_battle(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  _BYTE *v3; // r0@1
  int v4; // r6@1
  unsigned __int16 v5; // r0@1

  v1 = a1;
  v2 = (unsigned __int16)script_read_halfword(a1);
  v3 = *(_BYTE **)(v1 + 8);
  v4 = *v3;
  *(_DWORD *)(v1 + 8) = v3 + 1;
  v5 = script_read_halfword(v1);
  sub_80C54D0(v2, v4, v5);
  return 0;
}
