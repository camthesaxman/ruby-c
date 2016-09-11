int __fastcall sub_80F9E64(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = (unsigned __int16)sub_806BD80(a1);
    if ( v2 == 1 )
    {
      audio_play(5u);
      v202E8CC = sub_806CA38(v1);
      v202E8CC = v202E8CC;
      v202E8CE = sub_8040574((int)&dword_3004360[25 * v202E8CC]);
      v202E8CE = v202E8CE;
      sub_8123138(v1);
    }
    else if ( v2 == 2 )
    {
      audio_play(5u);
      v202E8CC = 255;
      sub_8123138(v1);
    }
  }
  return v4;
}
