int __fastcall sub_8082F68(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r5@1
  int *v3; // r4@4
  int (*v4)(); // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)GetLinkPlayerCount_2();
  if ( sub_8082E28(v1) != 1 && sub_8082E6C(v1) != 1 && v2 > 1 )
  {
    SetSuppressLinkErrorMessage(1);
    v3 = &dword_3004B20[10 * v1];
    *((_WORD *)v3 + 7) = 0;
    if ( (unsigned __int8)IsLinkMaster() == 1 )
    {
      audio_play(0x15u);
      box_related_two__3((int)gUnknown_081A4932);
      v4 = sub_8082FEC;
    }
    else
    {
      audio_play(0x16u);
      box_related_two__3((int)gUnknown_081A49B6);
      v4 = sub_80831F8;
    }
    *v3 = (int)v4;
  }
  return v6;
}
