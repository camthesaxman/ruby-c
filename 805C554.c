int __fastcall GetFieldObjectScriptPointerByLocalIdAndMap(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return *(_DWORD *)(GetFieldObjectTemplateByLocalIdAndMap(a1, a2, a3) + 16);
}
