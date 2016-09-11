int __fastcall RtcGetDayCount(_BYTE *a1)
{
  _BYTE *v1; // r6@1
  unsigned __int8 v2; // r5@1
  unsigned __int8 v3; // r4@1
  unsigned __int8 v4; // r0@1

  v1 = a1;
  v2 = ConvertBcdToBinary(*a1);
  v3 = ConvertBcdToBinary(v1[1]);
  v4 = ConvertBcdToBinary(v1[2]);
  return (unsigned __int16)ConvertDateToDayCount(v2, v3, v4);
}
