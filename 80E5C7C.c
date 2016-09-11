int __fastcall sub_80E5C7C(int a1)
{
  signed int v1; // r1@1
  _BYTE *v2; // r2@2
  int v4; // [sp+4h] [bp-4h]@0

  v202E864 = 16 * v202E864 | (((a1 << 24) & 0xF000000u) >> 24);
  v1 = 7;
  do
  {
    v2 = (_BYTE *)(v1-- + 33745004);
    *v2 = *(_BYTE *)(v1 + 33745004);
    v1 = (unsigned __int8)v1;
  }
  while ( (_BYTE)v1 );
  v202E86C = 1;
  return v4;
}
