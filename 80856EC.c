signed int __fastcall FieldEffectCmd_callnative(_DWORD *a1)
{
  ++*a1;
  FieldEffectScript_CallNative();
  return 1;
}
