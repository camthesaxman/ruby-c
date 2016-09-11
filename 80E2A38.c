int __fastcall sub_80E2A38(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r6@1
  signed int v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = sub_80E1DC4(word_3004B00[0]);
  v3 = sub_80792C0(
         ((unsigned __int16)word_3004B00[0] << 16 >> 23) & 1,
         ((unsigned int)(unsigned __int16)word_3004B00[0] << 16 >> 24) & 1,
         ((unsigned __int16)word_3004B00[0] << 16 >> 25) & 1,
         ((unsigned __int16)word_3004B00[0] << 16 >> 26) & 1);
  sub_80E2C8C(v1, v2 | v3);
  return v5;
}
