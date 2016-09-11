int __fastcall sub_81452D0(unsigned __int16 a1, int a2)
{
  unsigned __int16 v2; // r5@1
  unsigned int v3; // r1@1
  int v4; // r6@1
  unsigned int v5; // r2@1
  __int16 v6; // r1@1
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 16;
  v4 = v3 >> 16;
  v5 = 0;
  v6 = (v3 >> 20 << 12) + 1;
  do
  {
    *(_WORD *)(2 * v5 + a1 + 0x6000000) = v6;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0x3FF );
  sub_814524C((int)&gUnknown_0840B83C, 3u, 7u, a1, v4);
  sub_814524C((int)&gUnknown_0840B84B, 7u, 7u, v2, v4);
  sub_814524C((int)&gUnknown_0840B85A, 0xBu, 7u, v2, v4);
  sub_814524C((int)&gUnknown_0840B85A, 0x10u, 7u, v2, v4);
  sub_814524C((int)&gUnknown_0840B869, 0x14u, 7u, v2, v4);
  sub_814524C((int)&gUnknown_0840B878, 0x18u, 7u, v2, v4);
  return v8;
}
