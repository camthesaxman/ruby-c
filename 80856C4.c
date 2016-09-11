signed int __fastcall FieldEffectCmd_loadfadedpal(_DWORD *a1)
{
  ++*a1;
  FieldEffectScript_LoadFadedPalette();
  return 1;
}
