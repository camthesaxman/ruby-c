int __fastcall sub_80A4164(_BYTE *a1, unsigned __int16 a2, int a3, unsigned __int8 a4)
{
  int v4; // r0@1
  int v6; // [sp+4h] [bp-4h]@0

  *a1 = -71;
  v4 = (int)(a1 + 1);
  *(_BYTE *)v4 = -4;
  *(_BYTE *)(v4 + 1) = 20;
  *(_BYTE *)(v4 + 2) = 6;
  ConvertIntToDecimalStringN((char *)(v4 + 3), a2, a3, a4);
  return v6;
}
