int __fastcall sub_8067E7C(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned __int16 v2; // r0@1

  v1 = script_read_halfword(a1);
  v2 = VarGet(v1);
  v202E8DC = (sub_811A840(v2) & 0xFF) != 1;
  return 0;
}
