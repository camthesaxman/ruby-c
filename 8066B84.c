signed int __fastcall s52_waitmove_remote(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  __int16 v3; // r0@1
  _BYTE *v4; // r0@3
  __int16 v5; // r2@3
  __int16 v6; // r1@3

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  if ( v3 )
    v202E8B6 = v3;
  v4 = *(_BYTE **)(v1 + 8);
  v5 = *v4++;
  *(_DWORD *)(v1 + 8) = v4;
  v6 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  v202E8B8 = v5;
  v202E8BA = v6;
  script_setup_asm_script(v1, (int)s51a_0806B288);
  return 1;
}
