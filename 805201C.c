int __fastcall sub_805201C(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r5@1
  _BYTE *v3; // r6@1
  signed int v4; // r4@1
  signed int v5; // r5@1
  int v7; // [sp+0h] [bp-1Ch]@1
  int v8; // [sp+18h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  *a2 = -1;
  StringCopy(a2, (&gUnknown_083F7EB8)[4 * *a1]);
  StringAppend(v3, &gUnknown_0842D368);
  StringAppend(v3, &gUnknown_082162C8);
  v4 = (unsigned __int8)sub_810C9B0(v2);
  v5 = (unsigned __int8)sub_810C9E8(v2);
  StringAppend(v3, &gUnknown_0842D4D3);
  ConvertIntToDecimalStringN((char *)&v7, v4, 0, 3);
  StringAppend(v3, &v7);
  StringAppend(v3, &gUnknown_0842D4E1);
  ConvertIntToDecimalStringN((char *)&v7, v5, 0, 3);
  StringAppend(v3, &v7);
  StringAppend(v3, &gUnknown_0842D4F4);
  StringAppend(v3, &gUnknown_08216249);
  return v8;
}
