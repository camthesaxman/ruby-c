int __fastcall sub_808B0C0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v3; // r2@5
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BD80(a1);
    if ( v2 == 1 )
    {
      byte_3005CE0 = sub_806CA38(v1);
      if ( GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 45, v3) )
      {
        audio_play(0x20u);
      }
      else
      {
        sub_806D5A4();
        if ( !v2038561 )
          call_via_r3(v1, v203855E, sub_808B224, dword_3004AE4);
        if ( v2038561 == 1 )
        {
          audio_play(5u);
          sub_806E964(v1, v203855E, (int)sub_808B2EC);
        }
        if ( v2038561 == 3 )
        {
          audio_play(5u);
          sub_806EC44(v1, (int)sub_808B2B4);
        }
      }
    }
    else if ( v2 == 2 )
    {
      byte_3005CE0 = sub_806CA38(v1);
      audio_play(5u);
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      if ( v2038561 <= 1u )
        dword_3004B20[10 * v1] = (int)sub_808B25C;
      if ( v2038561 == 3 )
        dword_3004B20[10 * v1] = (int)sub_808B2B4;
    }
  }
  return v5;
}
