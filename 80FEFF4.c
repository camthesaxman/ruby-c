int __fastcall sub_80FEFF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
    dword_3004B20[10 * v1] = (int)sub_80FE868;
  }
  return v3;
}
