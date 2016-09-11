int sub_8085ED4()
{
  __int16 v0; // r4@1
  int *v1; // r1@1

  v0 = (unsigned __int8)calc_player_party_count();
  v1 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8085F10, -1)];
  *((_WORD *)v1 + 5) = v0;
  *((_WORD *)v1 + 6) = 117;
  *((_WORD *)v1 + 7) = 52;
  return 0;
}
