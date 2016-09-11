int __fastcall sub_80ABC70(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int *v3; // r1@4
  int (*v4)(); // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( word_300179E & 1 || word_300179E == 2 )
  {
    audio_play(5u);
    if ( sub_80AF59C(v2038695) << 24 )
    {
      v3 = &dword_3004B20[10 * v2];
      v4 = sub_80AC0C8;
    }
    else
    {
      sub_80AFFE0(1);
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_80ABCDC;
    }
    *v3 = (int)v4;
  }
  return v6;
}
