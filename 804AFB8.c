int __fastcall sub_804AFB8(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r10@1
  unsigned int v7; // r6@1
  unsigned int i; // r4@1
  __int16 v10; // [sp+0h] [bp-24h]@1
  __int16 v11; // [sp+2h] [bp-22h]@1
  int v12; // [sp+20h] [bp-4h]@3

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = ((unsigned int)a4 + 3) >> 2;
  v10 = 0;
  CpuSet(&v10, 33788768, (v7 << 6) | 0x1000000);
  v11 = 0;
  CpuSet(&v11, 32 * *(_BYTE *)(v4 + 13) + 33788768, (v7 << 6) | 0x1000000);
  sub_8004E3C(v4, 33788768, v6);
  for ( i = 0; i < v7; i = (i + 1) & 0xFF )
  {
    CpuSet((i << 7) + 33788768, (i << 8) + v5, 64);
    CpuSet(32 * (4 * i + *(_BYTE *)(v4 + 13)) + 33788768, 32 * (8 * i + 4) + v5, 64);
  }
  return v12;
}
