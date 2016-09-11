int __fastcall sub_808BC3C(int a1)
{
  int v1; // r0@1
  int v2; // r1@1
  int result; // r0@1

  v4000042 = 6359;
  v1 = 16 * a1 & 0xFFF;
  v2 = (v1 + 40) << 8;
  result = v1 + 56;
  v4000046 = v2 + result;
  return result;
}
