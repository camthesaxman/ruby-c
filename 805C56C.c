int __fastcall GetFieldObjectScriptPointerByFieldObjectId(unsigned __int8 a1)
{
  return GetFieldObjectScriptPointerByLocalIdAndMap(
           dword_30048A0[9 * a1 + 2],
           BYTE1(dword_30048A0[9 * a1 + 2]),
           BYTE2(dword_30048A0[9 * a1 + 2]));
}
