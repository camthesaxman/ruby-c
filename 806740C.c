int __fastcall s7F_load_pokename_team(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  unsigned __int16 v3; // r0@1
  unsigned __int16 v4; // r0@1
  char *v5; // r4@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_halfword(a1);
  v4 = VarGet(v3);
  v5 = (&gUnknown_083762F0)[4 * v2];
  GetMonData((int)&dword_3004360[25 * v4], 2, (int)v5);
  StringGetEnd10((int)v5);
  return 0;
}
