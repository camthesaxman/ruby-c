int __fastcall sub_8104A88(int a1)
{
  int v1; // r2@1
  signed int v2; // r0@1
  signed int v3; // r1@2
  int v5; // [sp+8h] [bp-4h]@0

  LOWORD(v1) = 4;
  v2 = a1 << 16;
  do
  {
    *(_WORD *)(2 * (32 * (signed __int16)v1 + (v2 >> 16)) + 0x600E000) = 0;
    v3 = ((signed __int16)v1 + 1) << 16;
    v1 = ((signed __int16)v1 + 1) & 0xFFFF;
  }
  while ( v3 >> 16 <= 14 );
  return v5;
}
