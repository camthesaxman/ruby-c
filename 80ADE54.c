int __fastcall sub_80ADE54(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_80037A0(33745160) == 1 )
  {
    sub_80B2184();
    word_30042C0 = 0;
    word_30041B4 = 160;
    audio_play_and_stuff(0x62u, 0);
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 4) = 0;
    *v2 = (int)sub_80ADEAC;
  }
  return v4;
}
