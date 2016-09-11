signed int __fastcall sub_80A212C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@2
  signed int result; // r0@3
  unsigned __int8 v5; // [sp+0h] [bp-Ch]@1

  if ( TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v5) << 24
    || (v3 = (unsigned __int8)sub_80A21E0(0), (sub_80A2260(v3, v5) & 0xFF) == 16) )
  {
    result = 1;
  }
  else
  {
    result = (unsigned __int8)sub_80A2370(v3);
  }
  return result;
}
