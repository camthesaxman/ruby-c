int __fastcall sub_80A3EF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@1
  unsigned int v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(5u);
  nullsub_16();
  v2 = &dword_3004B20[10 * v1];
  v3 = (~(unsigned __int8)byte_3005D10[4 * v2038559 + 1] + *((_BYTE *)v2 + 28)) & 0xFF;
  *((_WORD *)v2 + 14) = 0;
  if ( v3 <= 7 )
    sub_80A48E8(v1, v3, v3);
  sub_80A7528(0);
  return v5;
}
