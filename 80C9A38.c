int __fastcall sub_80C9A38(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned __int8 v3; // r0@1
  __int16 v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  if ( (unsigned __int8)FieldObjectCheckIfSpecialAnimFinishedOrInactive(&dword_30048A0[9 * v3]) == 1
    || !*((_WORD *)v2 + 2) )
  {
    sub_80C997C(gUnknown_083D61F0[*((_WORD *)v2 + 5)]);
    *((_WORD *)v2 + 2) = 1;
    *((_WORD *)v2 + 5) = (*((_WORD *)v2 + 5) + 1) & 3;
    v4 = *((_WORD *)v2 + 3) + 1;
    *((_WORD *)v2 + 3) = v4;
    if ( v4 == 4 )
      DisplayItemMessageOnField(v1, &gUnknown_0840E992, sub_80C9520, 0);
  }
  return v6;
}
