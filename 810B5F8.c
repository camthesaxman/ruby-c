int sub_810B5F8()
{
  int *v0; // r1@1

  v0 = &dword_3004B20[10 * (unsigned __int8)oei_task_add()];
  *((_WORD *)v0 + 12) = (unsigned int)sub_810B634 >> 16;
  *((_WORD *)v0 + 13) = (unsigned int)sub_810B634;
  if ( !(sub_81473B8() << 24) )
    SetPlayerAvatarTransitionFlags(1u);
  return 0;
}
