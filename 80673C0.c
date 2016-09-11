int __fastcall s7E_load_first_pokenames(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r2@1
  char *v3; // r4@1
  unsigned __int8 v4; // r0@1
  int v5; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = (&gUnknown_083762F0)[4 * v2];
  v4 = sub_810F87C();
  v5 = GetMonData((int)&dword_3004360[25 * v4], 11, 0);
  StringCopy(v3, &gSpeciesNames[11 * v5]);
  return 0;
}
