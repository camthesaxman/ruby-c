int __fastcall s50_execute_movement_remote(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  __int16 v3; // r4@1
  int v4; // r3@1
  _BYTE *v5; // r0@1
  int v6; // r2@1
  int v7; // r1@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = script_read_word(v1);
  v5 = *(_BYTE **)(v1 + 8);
  v6 = *v5++;
  *(_DWORD *)(v1 + 8) = v5;
  v7 = *v5;
  *(_DWORD *)(v1 + 8) = v5 + 1;
  exec_movement((unsigned __int8)v3, v7, v6, v4);
  v202E8B6 = v3;
  return 0;
}
