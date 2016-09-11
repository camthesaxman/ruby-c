int __fastcall sub_80A6C6C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 14) = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                      + (unsigned __int8)byte_3005D10[4 * v2038559]
                      + 1;
  v3 = sub_80A48E8(a1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
  sub_80A73FC(v3);
  v4 = audio_play(5u);
  sub_80A7590(v4);
  if ( v2038559 == 4 )
  {
    *((_WORD *)v2 + 5) = 1;
    sub_80A6B64(v1);
  }
  else
  {
    *v2 = (int)sub_80A6BE0;
    sub_80A7528(6);
    if ( v2038559 == 3 )
      sub_80A4DD8(v1, 6u, 9u, 7, 3, 3u);
    else
      sub_80A4DD8(v1, 7u, 9u, 6, 3, 2u);
  }
  return v6;
}
