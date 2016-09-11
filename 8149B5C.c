int __fastcall sub_8149B5C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8149520();
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 19) = 0;
  *v2 = (int)sub_8149B90;
  audio_play(0x66u);
  return v4;
}
