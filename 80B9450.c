int __fastcall sub_80B9450(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4) + 1;
  *((_WORD *)v1 + 4) = v2;
  if ( v2 == 50 )
  {
    audio_play(0xE2u);
    *((_WORD *)v1 + 4) = 0;
  }
  return v4;
}
