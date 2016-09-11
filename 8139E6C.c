int __fastcall sub_8139E6C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = MenuZeroFillWindowRect(0, 0, 0xAu, 9u);
  v3 = sub_813AF3C(v2);
  v201FE03 = v3;
  if ( v3 << 24 )
  {
    v201FE00 = 0;
    v201FE02 = 0;
    sub_813AF78();
    sub_813A240(v1);
    sub_813B108(v1);
    dword_3004B20[10 * v1] = (int)sub_813B174;
  }
  else
  {
    DisplayItemMessageOnField(v1, (int)"ÎÜÙæÙ´ç", (int)sub_8139E24, 0);
  }
  return v5;
}
