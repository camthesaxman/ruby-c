int __fastcall sA8_unknown(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  unsigned __int8 v3; // r0@1
  unsigned __int8 *v4; // r3@1
  unsigned __int8 v5; // r2@1
  unsigned __int8 v6; // r1@1
  int v7; // r4@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = *(unsigned __int8 **)(v1 + 8);
  v5 = *v4++;
  *(_DWORD *)(v1 + 8) = v4;
  v6 = *v4;
  v7 = (int)(v4 + 1);
  *(_DWORD *)(v1 + 8) = v4 + 1;
  LOBYTE(v4) = v4[1];
  *(_DWORD *)(v1 + 8) = v7 + 1;
  sub_805BCF0(v3, v6, v5, (_BYTE)v4 + 83);
  return 0;
}
