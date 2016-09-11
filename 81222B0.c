int __fastcall sub_81222B0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BE38(a1);
    if ( v2 == 1 )
    {
      audio_play(5u);
      byte_3005CE0 = sub_806CA38(v1);
      if ( byte_3005CE0 == 6 )
      {
        dword_3004B20[10 * v1] = (int)sub_81224A8;
      }
      else
      {
        GetMonNickname((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], (int)&gStringVar1);
        sub_81221F8(v1);
        dword_3004B20[10 * v1] = (int)sub_812238C;
      }
      sub_808B5B4(v1);
    }
    else if ( v2 == 2 )
    {
      audio_play(5u);
      sub_8121E58();
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      dword_3004B20[10 * v1] = (int)sub_8122450;
    }
  }
  return v4;
}
