int __fastcall sub_80F4194(int a1, int a2)
{
  int v2; // r7@1
  unsigned int v3; // r1@1
  __int16 v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+14h] [bp-4h]@3

  v2 = a1;
  v5 = 4369;
  v40000D4 = &v5;
  v40000D8 = 33789792;
  v40000DC = -2130706112;
  sub_8004E3C((int)&gWindowConfig_81E70F0, 33788768, a2);
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 33790336;
  v40000DC = -2130706384;
  v2039560 &= 0xFFFFFFFu;
  v2039564 &= 0xFFFFFFFu;
  v2039568 &= 0xFFFFFFFu;
  v203956C &= 0xFFFFFFFu;
  v2039570 &= 0xFFFFFFFu;
  v2039574 &= 0xFFFFFFFu;
  v2039578 &= 0xFFFFFFFu;
  v203957C &= 0xFFFFFFFu;
  v2039960 &= 0xFFFFFFFu;
  v2039964 &= 0xFFFFFFFu;
  v2039968 &= 0xFFFFFFFu;
  v203996C &= 0xFFFFFFFu;
  v2039970 &= 0xFFFFFFFu;
  v2039974 &= 0xFFFFFFFu;
  v2039978 &= 0xFFFFFFFu;
  v203997C &= 0xFFFFFFFu;
  v3 = 0;
  do
  {
    v40000D4 = (v3 << 7) + 33789792;
    v40000D8 = v2 + 32 * (8 * v3 + 4);
    v40000DC = -2147483584;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 4 );
  return v6;
}
