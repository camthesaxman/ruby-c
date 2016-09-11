int __fastcall sub_809665C(int a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r7@1
  _BYTE *v4; // r2@1
  char v5; // r0@2
  _BYTE *v6; // r0@4
  int v8; // [sp+10h] [bp-4h]@0

  v3 = (unsigned __int8)sub_8095ADC(*(_BYTE *)(v2038478 + 572), a2, a3);
  gStringVar1 = -4;
  byte_20231CD = 4;
  byte_20231CE = 15;
  byte_20231CF = 1;
  byte_20231D0 = 14;
  v4 = StringCopy(&byte_20231D1, (_BYTE *)(9 * *(_BYTE *)(v2038478 + 572) + 33784804));
  *v4 = -2;
  v4[1] = -4;
  v4[2] = 17;
  if ( v3 > 9 )
    v5 = 34;
  else
    v5 = 40;
  v4[3] = v5;
  v6 = ConvertIntToDecimalString(v4 + 4, v3);
  *v6 = -70;
  v6[1] = -92;
  v6[2] = -95;
  v6[3] = -1;
  sub_80966F4(&gStringVar1, 0, 1);
  return v8;
}
