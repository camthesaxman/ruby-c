int __fastcall sub_8067D9C(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  int v3; // r4@1
  unsigned __int16 v4; // r0@1
  int v5; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)VarGet(v2);
  v4 = script_read_halfword(v1);
  v5 = VarGet(v4);
  sub_80586E0((v3 + 7) & 0xFFFF, (unsigned int)((v5 << 16) + 458752) >> 16);
  return 0;
}
