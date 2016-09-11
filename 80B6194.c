signed int __fastcall sub_80B6194(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  sub_80B6460(2, 1, 0);
  if ( v1 == 5 )
  {
    audio_play(5u);
    v2000000 = 6;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
