signed int __fastcall FieldEffectCmd_loadfadedpal_callnative(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  ++*a1;
  FieldEffectScript_LoadFadedPalette(a1);
  FieldEffectScript_CallNative(v2, v3);
  return 1;
}
