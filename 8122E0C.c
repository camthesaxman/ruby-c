int __fastcall sub_8122E0C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v3; // r1@5
  int v4; // r2@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BD80(a1);
    if ( v2 == 1 )
    {
      audio_play(5u);
      byte_3005CE0 = sub_806CA38(v1);
      GetMonNickname((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], (int)&gStringVar1);
      sub_8122D94(v1, v3, v4);
      dword_3004B20[10 * v1] = (int)sub_8122EAC;
    }
    else if ( v2 == 2 )
    {
      audio_play(5u);
      byte_3005CE0 = -1;
      v202E8CC = 255;
      sub_8123138(v1);
    }
  }
  return v6;
}
