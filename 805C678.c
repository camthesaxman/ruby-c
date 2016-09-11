int __fastcall GetFieldObjectTemplateByLocalIdAndMap(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  signed int v4; // r1@3
  int v5; // r0@3

  v3 = a1;
  a3 = (unsigned __int8)a3;
  if ( v2025739 != a2 || v2025738 != a3 )
  {
    v5 = *(_DWORD *)(get_mapheader_by_bank_and_number(a3, a2) + 4);
    v4 = *(_DWORD *)(v5 + 4);
  }
  else
  {
    v4 = 33710932;
    v5 = v202E82C;
  }
  return FindFieldObjectTemplateInArrayByLocalId(v3, v4, *(_BYTE *)v5);
}
