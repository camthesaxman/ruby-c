int __fastcall sub_80C66BC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(0xA9u);
  *(_WORD *)(v1 + 46) = 0;
  *(_DWORD *)(v1 + 28) = sub_80C66D8;
  return v3;
}
