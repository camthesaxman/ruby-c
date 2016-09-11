int __fastcall sub_80B785C(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  unsigned int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@2
  int v5; // r4@2
  int v7; // [sp+Ch] [bp-4h]@0

  LOWORD(v1) = 0;
  v2 = 9;
  v3 = 80 * a1;
  do
  {
    v4 = (signed __int16)v1;
    MenuPrint((int)(&gUnknown_083CE3A8[20 * (signed __int16)v1] + v3), 3, v2);
    v5 = (v4 + 1) << 16;
    v2 = ((v2 << 16) + 0x20000) >> 16;
    v1 = (unsigned int)v5 >> 16;
  }
  while ( v5 >> 16 <= 3 );
  return v7;
}
