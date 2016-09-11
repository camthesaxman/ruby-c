int __fastcall sub_8067488(int a1)
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
  StringCopy((&gUnknown_083762F0)[4 * v2], &asc_83EB6C5[32 * v4 & 0x1FFFFF]);
  return 0;
}
