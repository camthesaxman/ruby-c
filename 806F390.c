int __fastcall sub_806F390(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  char v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = ProcessMenuInputNoWrap_();
  if ( v4 )
  {
    if ( v4 == 1 || v4 == -1 )
    {
      if ( v4 == -1 )
        audio_play(5);
      sub_806F614(v3);
    }
  }
  else
  {
    MenuZeroFillWindowRect(23, 8, 29, 13);
    sub_806E834((int)"ÑÜÝ×Ü", 1u);
    dword_3004B20[10 * v2] = (int)sub_806F44C;
  }
  return v6;
}
