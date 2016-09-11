int __fastcall atkA0_psywavedamageeffect(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  do
    a1 = Random(a1);
  while ( (a1 & 0xF) > 10 );
  v2024BEC = (10 * (a1 & 0xF) + 50) * *(_BYTE *)(88 * v2024C07 + 0x2024AAA) / 100;
  ++v2024C10;
  return v2;
}
