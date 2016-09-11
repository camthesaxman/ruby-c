signed int __fastcall sub_80E1DC4(unsigned __int16 a1)
{
  int v1; // r8@1
  signed int v2; // r0@1

  v1 = a1 & 1;
  v2 = a1 << 16;
  return sub_80791A8(v1, (v2 >> 17) & 1, (v2 >> 18) & 1, (v2 >> 19) & 1, (v2 >> 20) & 1, (v2 >> 21) & 1, (v2 >> 22) & 1);
}
