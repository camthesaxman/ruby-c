int __fastcall RtcCalcTimeDifference(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r5@1
  int v4; // r7@1
  int v5; // r6@1
  __int16 v6; // r4@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = RtcGetDayCount(a1);
  *(_BYTE *)(v4 + 4) = ConvertBcdToBinary(v3[6]) - *(_BYTE *)(v5 + 4);
  *(_BYTE *)(v4 + 3) = ConvertBcdToBinary(v3[5]) - *(_BYTE *)(v5 + 3);
  *(_BYTE *)(v4 + 2) = ConvertBcdToBinary(v3[4]) - *(_BYTE *)(v5 + 2);
  *(_WORD *)v4 = v6 - *(_WORD *)v5;
  if ( (signed int)*(_BYTE *)(v4 + 4) < 0 )
  {
    *(_BYTE *)(v4 + 4) += 60;
    --*(_BYTE *)(v4 + 3);
  }
  if ( (signed int)*(_BYTE *)(v4 + 3) < 0 )
  {
    *(_BYTE *)(v4 + 3) += 60;
    --*(_BYTE *)(v4 + 2);
  }
  if ( (signed int)*(_BYTE *)(v4 + 2) < 0 )
  {
    *(_BYTE *)(v4 + 2) += 24;
    --*(_WORD *)v4;
  }
  return v8;
}
