int __fastcall sub_80A6574(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  audio_play(0x5Fu);
  v2 = &dword_3004B20[10 * v1];
  sub_80A6870(v203855E, *((_BYTE *)v2 + 10));
  *v2 = (int)sub_80A6548;
  return v4;
}
