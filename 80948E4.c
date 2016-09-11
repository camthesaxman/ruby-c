int __fastcall FormatPlayTime(_BYTE *a1, unsigned __int16 a2, unsigned __int16 a3, __int16 a4)
{
  signed int v4; // r6@1
  __int16 v5; // r4@1
  _BYTE *v6; // r5@1
  int v8; // [sp+Ch] [bp-4h]@0

  v4 = a3;
  v5 = a4;
  v6 = ConvertIntToDecimalString(a1, a2);
  *v6 = 0;
  if ( v5 )
    v6[1] = -16;
  else
    v6[1] = 0;
  v6[2] = 0;
  ConvertIntToDecimalStringN(v6 + 3, v4, 2, 2);
  return v8;
}
