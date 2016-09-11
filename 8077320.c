int sub_8077320()
{
  int v0; // r8@1
  char v1; // r4@1
  char v2; // r5@1
  char v3; // r6@1
  __int16 v4; // r10@1
  int *v5; // r1@1
  int v7; // [sp+18h] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = *(_BYTE *)(v202F7A4 + 2);
  v2 = *(_BYTE *)(v202F7A4 + 3);
  v3 = *(_BYTE *)(v202F7A4 + 4);
  v4 = *(_BYTE *)(v202F7A4 + 5);
  v5 = &dword_3004B20[10 * (unsigned __int8)CreateTask(c3_08073CEC, 1)];
  *((_WORD *)v5 + 4) = v1;
  *((_WORD *)v5 + 5) = v2;
  *((_WORD *)v5 + 6) = v3;
  *((_WORD *)v5 + 7) = v4;
  *((_WORD *)v5 + 8) = v1;
  audio_play_and_stuff(v0, v1);
  ++v202F7B3;
  v202F7A4 += 6;
  return v7;
}
