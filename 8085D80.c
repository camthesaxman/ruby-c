int sub_8085D80()
{
  __int16 v0; // r4@1
  int *v1; // r1@1

  v0 = (unsigned __int8)calc_player_party_count();
  v1 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8085DC4, -1)];
  *((_WORD *)v1 + 5) = v0;
  *((_WORD *)v1 + 6) = 93;
  *((_WORD *)v1 + 7) = 36;
  *((_WORD *)v1 + 8) = 124;
  *((_WORD *)v1 + 9) = 24;
  return 0;
}
