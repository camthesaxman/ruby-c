int __fastcall sub_8145AA4(unsigned __int16 a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int i; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)Random();
  for ( i = (v1 - 1) & 0xFFFF; i != 0xFFFF; i = (i - 1) & 0xFFFF )
    v2 = 1103515245 * v2 + 12345;
  sub_8145D14(v2);
  return v5;
}
