_BOOL4 __fastcall TryGetFieldObjectIdByLocalIdAndMap(unsigned __int8 a1, int a2, int a3, _BYTE *a4)
{
  _BYTE *v4; // r4@1
  char v5; // r0@1

  v4 = a4;
  v5 = GetFieldObjectIdByLocalIdAndMap(a1);
  *v4 = v5;
  return v5 == 16;
}
