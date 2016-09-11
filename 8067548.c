int __fastcall s84_load_textvar_std_expression(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  unsigned __int16 v3; // r0@1
  int v4; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_halfword(a1);
  v4 = VarGet(v3);
  StringCopy((&gUnknown_083762F0)[4 * v2], *(_BYTE **)((char *)&gUnknown_083CE048 + (4 * v4 & 0x3FFFF)));
  return 0;
}
