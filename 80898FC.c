int __fastcall sub_80898FC(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r4@1
  unsigned int v5; // r1@1
  int v6; // r2@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  do
  {
    *(_WORD *)(2 * v5 + a1) = gSineTable[v6] * v4 / 256;
    v6 = (v6 + v3) & 0xFF;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0xFF );
  return v8;
}
