int __fastcall RemoveFieldObjectByLocalIdAndMap(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int16 v3; // r0@2
  unsigned __int8 v5; // [sp+0h] [bp-8h]@1
  int v6; // [sp+4h] [bp-4h]@3

  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v5) << 24) )
  {
    v3 = GetFieldObjectFlagIdByFieldObjectId(v5);
    FlagSet(v3);
    RemoveFieldObject(&dword_30048A0[9 * v5]);
  }
  return v6;
}
