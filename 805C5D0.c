signed int __fastcall unref_sub_805C5D0(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  signed int result; // r0@2
  unsigned __int8 v4; // [sp+0h] [bp-8h]@1

  if ( TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v4) << 24 )
    result = 255;
  else
    result = BYTE3(dword_30048A0[9 * v4 + 1]);
  return result;
}
