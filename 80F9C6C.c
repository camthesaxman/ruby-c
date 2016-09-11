int __fastcall sub_80F9C6C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BD80(a1);
    if ( v2 == 1 )
    {
      audio_play(5u);
      v2038694 = sub_806CA38(v1);
      v202E8CC = v2038694;
      sub_8123138(v1);
    }
    else if ( v2 == 2 )
    {
      audio_play(5u);
      v2038694 = -1;
      v202E8CC = 255;
      sub_8123138(v1);
    }
  }
  return v4;
}
