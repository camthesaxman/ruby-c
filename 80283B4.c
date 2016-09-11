signed int __fastcall move_weather_interaction(int a1, unsigned __int16 a2)
{
  int v2; // r0@3
  signed int result; // r0@10

  if ( gBattleMoves[12 * a2] == 151 && v2024DB8 & 0x60
    || (v2 = gBattleMoves[12 * a2], v2 != 145) && v2 != 39 && v2 != 75 && v2 != 151 && v2 != 155 && v2 != 26
    || !(v2024C6C & 0x8000000) )
  {
    result = 2;
  }
  else
  {
    result = 1;
  }
  return result;
}
