int __fastcall GetFieldObjectFlagIdByLocalIdAndMap(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return *(_WORD *)(GetFieldObjectTemplateByLocalIdAndMap(a1, a2, a3) + 20);
}
