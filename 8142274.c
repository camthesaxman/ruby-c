int __fastcall sub_8142274(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  dword_3005EBC = (int)sub_8141FC4;
  sub_8125D44(3u);
  audio_play(0x37u);
  v2 = &dword_3004B20[10 * v1];
  *v2 = (int)sub_81422B8;
  *((_WORD *)v2 + 7) = 32;
  return v4;
}
