int __fastcall s80_load_item_name(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  unsigned __int16 v3; // r0@1
  unsigned __int16 v4; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_halfword(a1);
  v4 = VarGet(v3);
  itemid_copy_name(v4, (&gUnknown_083762F0)[4 * v2]);
  return 0;
}
