signed int __fastcall FieldEffectCmd_loadpal(_DWORD *a1)
{
  ++*a1;
  FieldEffectScript_LoadPalette();
  return 1;
}
