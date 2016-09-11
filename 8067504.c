int __fastcall s83_load_textvar_var(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r5@1
  unsigned __int16 v3; // r0@1
  unsigned __int16 v4; // r0@1
  signed int v5; // r4@1
  unsigned __int8 v6; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_halfword(a1);
  v4 = VarGet(v3);
  v5 = v4;
  v6 = sub_80BF0B8(v4);
  ConvertIntToDecimalStringN((&gUnknown_083762F0)[4 * v2], v5, 0, v6);
  return 0;
}
