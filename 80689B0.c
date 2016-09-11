signed int __fastcall is_it_battle_time_3(unsigned __int16 a1)
{
  unsigned __int16 v1; // r4@1
  unsigned __int16 v2; // r7@1
  signed int result; // r0@2

  v1 = a1;
  v2 = a1;
  if ( v202E8C0 > 3u )
  {
    if ( (sub_8085104(a1, v202E8C2) & 0xFF) == 1 )
    {
      v202E8C0 = 0;
      v202E8C2 = v2;
      result = 1;
    }
    else
    {
      v202E8C2 = v1;
      result = 0;
    }
  }
  else
  {
    ++v202E8C0;
    v202E8C2 = a1;
    result = 0;
  }
  return result;
}
