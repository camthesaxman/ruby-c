int __fastcall sub_8089CD4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  char v3; // r0@5
  int v4; // r0@5
  int v5; // r1@5
  int v6; // r2@5
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BD80(a1);
    if ( v2 == 1 )
    {
      audio_play(5u);
      v3 = sub_806CA38(v1);
      byte_3005CE0 = v3;
      v4 = GetMonNickname((int)&dword_3004360[25 * (unsigned __int8)v3], (int)&gStringVar1);
      sub_8089A8C(v4, v5, v6);
      v202FFA8 = 0;
      sub_8089C7C(0);
      dword_3004B20[10 * v1] = (int)sub_8089D94;
      sub_808B5B4(v1);
    }
    else if ( v2 == 2 )
    {
      audio_play(5u);
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      dword_3004B20[10 * v1] = (int)sub_8089E4C;
    }
  }
  return v8;
}
