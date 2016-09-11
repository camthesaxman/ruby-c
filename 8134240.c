int sub_8134240()
{
  int v0; // r2@1
  int v1; // r2@1
  int v2; // r2@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r2@1
  int v6; // r2@1
  int v7; // r2@1
  int v9; // [sp+20h] [bp-4h]@0

  CreateMon((int)&unk_30045C0, 0x198u, 0x28u, 0x20u);
  v2028880 = 408;
  v2028884 = 40;
  v2028885 = 0;
  v202888B = 1;
  v2028878 = GetMonData((int)&unk_30045C0, 66, v0);
  v202887C = GetMonData((int)&unk_30045C0, 0, v1);
  v2028882 = GetMonData((int)&unk_30045C0, 58, v2);
  v2028886 = GetMonData((int)&unk_30045C0, 22, v3);
  v2028887 = GetMonData((int)&unk_30045C0, 23, v4);
  v2028888 = GetMonData((int)&unk_30045C0, 24, v5);
  v2028889 = GetMonData((int)&unk_30045C0, 33, v6);
  v202888A = GetMonData((int)&unk_30045C0, 47, v7);
  v2039302 = 0;
  v2039303 = gUnknown_08402E80[6 * ((unsigned __int16)Random() % 0x14u & 0xFFFF)];
  return v9;
}
