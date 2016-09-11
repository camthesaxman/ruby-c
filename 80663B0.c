int __fastcall sA6_activate_per_step_callback_eg_ash(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  activate_per_step_callback(v2);
  return 0;
}
