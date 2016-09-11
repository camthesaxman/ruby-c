int __fastcall sub_80A3E90(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  audio_play(5u);
  nullsub_16();
  v2 = &dword_3004B20[10 * v1];
  sub_80A3E70(
    (*((_BYTE *)v2 + 28) - 1) & 0xFF,
    ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559]) & 0xFF);
  *((_WORD *)v2 + 14) = 0;
  sub_80A763C();
  v3 = sub_80A7528(0);
  sub_80A736C(v3);
  return v5;
}
