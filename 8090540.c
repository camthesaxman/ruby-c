int __fastcall sub_8090540(int a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@1

  v1 = (a1 << 11) & 0x7FFFFFF;
  LZ77UnCompVram(&gUnknown_08E96B58, v1 + 100663296);
  v40000D4 = &v3;
  v40000D8 = v1 + 100663488;
  v40000DC = -2130705888;
  return v4;
}
