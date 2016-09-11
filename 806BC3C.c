int __fastcall sub_806BC3C(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r5@1
  int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r4@1
  int v6; // r2@2
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a2;
  v3 = *(&gUnknown_08376918[6 * (unsigned __int8)battle_type_is_double(a1)] + (unsigned __int8)a1);
  v4 = 0;
  v5 = 32 * (v2 / 7) & 0x1FFF;
  do
  {
    v6 = 2 * v4 + v3;
    *(_WORD *)v6 = gUnknown_08E9A300[v4 + v5] + 268;
    *(_WORD *)(v6 + 64) = gUnknown_08E9A300[v4 + v5 + 32] + 268;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 6 );
  return v8;
}
