int sub_8147478()
{
  int result; // r0@3

  result = 0;
  if ( GetMonData((int)dword_3004360, 65, 0) == 381 )
  {
    calc_player_party_count();
    if ( GetMonData((int)&unk_30042FC + 100 * (unsigned __int8)byte_3004350, 65, 0) == 314 )
      result = 1;
  }
  return result;
}
