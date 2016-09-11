int __fastcall sub_80C99EC(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  if ( (unsigned __int8)FieldObjectCheckIfSpecialAnimFinishedOrInactive(&dword_30048A0[9 * v2]) == 1 )
    DisplayItemMessageOnField(v1, &gUnknown_0840E94E, sub_80C9520, 0);
  return v4;
}
