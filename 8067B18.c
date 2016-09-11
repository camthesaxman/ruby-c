int __fastcall s9D_set_HM_animation_data(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  unsigned __int16 v3; // r0@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v3 = script_read_halfword(a1);
  *(_DWORD *)(4 * v2 + 0x202FF84) = (signed __int16)VarGet(v3);
  return 0;
}
