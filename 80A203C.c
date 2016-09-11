_BYTE *__fastcall sub_80A203C(_BYTE *a1, signed int a2)
{
  int v2; // r4@1
  _BYTE *v3; // r0@3
  int v5; // [sp+0h] [bp-14h]@3

  a2 = (unsigned __int8)a2;
  *a1 = 52;
  v2 = (int)(a1 + 1);
  if ( !(_BYTE)a2 )
    a2 = 5;
  ConvertIntToDecimalString(&v5, a2);
  v3 = (_BYTE *)sub_80A1E9C(v2, &v5, 0xEu);
  return StringCopy(v3, &gUnknown_0842D0F1);
}
