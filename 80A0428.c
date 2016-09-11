int __fastcall sub_80A0428(int a1, _BYTE *a2)
{
  int v2; // r5@1
  _BYTE *v3; // r6@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int16)sub_80A03BC(a1, *a2);
  MenuZeroFillWindowRect(0xBu, 0xFu, 0x1Cu, 0x12u);
  if ( v201800B == 2 )
    sub_80A046C(v4);
  else
    sub_80A0498(v4);
  sub_80A03F0(v2, v3);
  return v6;
}
