int __fastcall s7B_change_pokedata_AP(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r5@1
  int v3; // r4@1
  unsigned __int16 v4; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v4 = script_read_halfword(a1);
  sub_80C5530(v2, v4, v3);
  return 0;
}
