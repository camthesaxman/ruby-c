int sub_814A3D4()
{
  int *v0; // r1@1

  v0 = &dword_3004B20[10 * (unsigned __int8)oei_task_add()];
  *((_WORD *)v0 + 12) = (unsigned int)sub_814A404 >> 16;
  *((_WORD *)v0 + 13) = (unsigned int)sub_814A404;
  SetPlayerAvatarTransitionFlags(1u);
  return 0;
}
