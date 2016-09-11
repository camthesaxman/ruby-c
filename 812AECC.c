signed int __fastcall unref_sub_812AECC(int a1)
{
  signed int v1; // r0@1
  int v3; // r0@8

  v1 = (unsigned __int8)sub_812613C(a1);
  if ( v1 == 1 )
  {
    audio_play(0x16u);
    return 1;
  }
  if ( v1 > 1 )
  {
    if ( v1 == 2 )
    {
      ((void (*)(void))sub_812AF10)();
    }
    else if ( v1 == 3 )
    {
      v3 = audio_play(0x16u);
      sub_812AF10(v3);
      return 1;
    }
  }
  return 0;
}
