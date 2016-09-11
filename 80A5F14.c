int __fastcall sub_80A5F14(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  audio_play(5u);
  dword_3004B20[10 * v1] = (int)sub_80A5EA0;
  sub_80A7528(3);
  if ( v2038559 == 3 )
    sub_80A4DD8(v1, 6u, 9u, 7, 3, 3u);
  else
    sub_80A4DD8(v1, 7u, 9u, 6, 3, 2u);
  return v3;
}
