int __fastcall sub_811A050(unsigned __int16 a1)
{
  unsigned __int16 v1; // r5@1
  int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( dword_3007384 < 0 && !v201C01A && !v201C01B )
  {
    v201C01B = 4;
    if ( (unsigned __int8)sub_80753E8() == 1 )
    {
      sub_80753B0();
      v201C018 = v1;
      v201C01A = 2;
    }
    else
    {
      sub_811A0A0(v2);
    }
  }
  return v4;
}
