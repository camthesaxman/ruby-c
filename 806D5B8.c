int __fastcall sub_806D5B8(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned __int8 v3; // r10@1
  int v4; // r0@1
  unsigned __int8 v5; // r9@1
  int v6; // r0@1
  unsigned __int8 v7; // r8@1
  unsigned __int8 v8; // r0@1
  int v10; // [sp+4h] [bp-20h]@1
  int v11; // [sp+20h] [bp-4h]@1

  v1 = (unsigned __int8)a1;
  v2 = (unsigned __int8)battle_type_is_double(a1);
  v3 = *(&gUnknown_08376948[24 * v2] + 4 * v1);
  v4 = (unsigned __int8)battle_type_is_double(v2);
  v5 = *(&gUnknown_08376948[24 * v4 + 1] + 4 * v1);
  v6 = (unsigned __int8)battle_type_is_double(v4);
  v7 = *(&gUnknown_08376948[24 * v6 + 2] + 4 * v1);
  v8 = battle_type_is_double(v6);
  ZeroFillWindowRect((int)&unk_3004210, v3, v5, v7, *(&gUnknown_08376948[24 * v8 + 3] + 4 * v1));
  v10 = 0;
  CpuFastSet(&v10, (v1 << 10) + 100745216, 16777472);
  return v11;
}
