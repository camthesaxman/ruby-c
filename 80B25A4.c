int __fastcall sub_80B25A4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v1 + 6) > 9 )
  {
    *((_WORD *)v1 + 6) = 0;
    audio_play_and_stuff(0x61u, 0);
    *v1 = (int)sub_80B2508;
  }
  else
  {
    ++*((_WORD *)v1 + 6);
  }
  return v3;
}
