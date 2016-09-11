int __fastcall GetFieldObjectFlagIdByFieldObjectId(unsigned __int8 a1)
{
  return (unsigned __int16)GetFieldObjectFlagIdByLocalIdAndMap(
                             dword_30048A0[9 * a1 + 2],
                             BYTE1(dword_30048A0[9 * a1 + 2]),
                             BYTE2(dword_30048A0[9 * a1 + 2]));
}
