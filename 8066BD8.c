int __fastcall sub_8066BD8(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned __int8 v2; // r0@1

  v1 = script_read_halfword(a1);
  v2 = VarGet(v1);
  RemoveFieldObjectByLocalIdAndMap(v2, v2025739, v2025738);
  return 0;
}