int __fastcall sub_806607C(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  int v3; // r4@1
  unsigned __int16 v4; // r0@1
  unsigned __int16 v5; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)VarGet(v2);
  v4 = script_read_halfword(v1);
  v5 = VarGet(v4);
  v202E8DC = sub_80A9760(v3, v5);
  v202E8DC = v202E8DC;
  return 0;
}
