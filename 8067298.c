int __fastcall sub_8067298(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  unsigned __int16 v3; // r0@1
  _BYTE *v4; // r3@1
  int v5; // r1@1
  int v6; // r2@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = *(_BYTE **)(v1 + 8);
  v5 = *v4++;
  *(_DWORD *)(v1 + 8) = v4;
  v6 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  sub_80B58C4(v3, v5, v6);
  return 0;
}
