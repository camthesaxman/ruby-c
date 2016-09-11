int __fastcall sA4_set_weather_data(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned __int16 v2; // r0@1

  v1 = script_read_halfword(a1);
  v2 = VarGet(v1);
  sub_80806B4(v2);
  return 0;
}
