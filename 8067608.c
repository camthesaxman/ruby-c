int __fastcall s79_give_pokemon(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v3; // r6@1
  _BYTE *v4; // r0@1
  int v5; // r9@1
  unsigned __int16 v6; // r0@1
  int v7; // r5@1
  int v8; // r8@1
  _BYTE *v9; // r1@1
  int v10; // r2@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)VarGet(v2);
  v4 = *(_BYTE **)(v1 + 8);
  v5 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  v6 = script_read_halfword(v1);
  v7 = (unsigned __int16)VarGet(v6);
  v8 = script_read_word(v1);
  script_read_word(v1);
  v9 = *(_BYTE **)(v1 + 8);
  v10 = *v9;
  *(_DWORD *)(v1 + 8) = v9 + 1;
  v202E8DC = sub_80C5374(v3, v5, v7, v8);
  v202E8DC = v202E8DC;
  return 0;
}
