int __fastcall sC4_unknown(int a1)
{
  int v1; // r5@1
  char *v2; // r0@1
  char v3; // r9@1
  char v4; // r8@1
  char v5; // r6@1
  unsigned __int16 v6; // r0@1
  char v7; // r4@1
  unsigned __int16 v8; // r0@1
  char v9; // r0@1

  v1 = a1;
  v2 = *(char **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v5 = v2[1];
  *(_DWORD *)(v1 + 8) = v2 + 2;
  v6 = script_read_halfword(v1);
  v7 = VarGet(v6);
  v8 = script_read_halfword(v1);
  v9 = VarGet(v8);
  sub_805363C(v3, v4, v5, v7, v9);
  return 0;
}
