int __fastcall sub_80A3B04(int a1, int a2)
{
  int v2; // r5@1
  signed int v3; // r1@1
  signed int v4; // r6@1
  int v5; // r0@5
  unsigned int v6; // r2@5
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  v2038559 += BYTE3(v3);
  if ( v2038559 > 4 )
    v2038559 = 0;
  if ( v2038559 < 0 )
    v2038559 = 4;
  v5 = sub_80A76A0();
  sub_80A7590(v5);
  dword_3005D24 = gUnknown_083C1618[2 * v2038559];
  sub_80A3D24(v2038559);
  v203855A = 0;
  sub_80A3954(v2);
  sub_80A396C(v2, 0, 0x10u, 3u);
  sub_80A39B8(v2, 0);
  v203855B = 6;
  v2038562 = 0;
  v6 = (unsigned __int8)FindTaskIdByFunc((int)sub_80A37F8);
  if ( v6 == 255 )
    v6 = CreateTask((int)sub_80A37F8, 8) & 0xFF;
  HIWORD(dword_3004B20[10 * v6 + 4]) = v4;
  return v8;
}
