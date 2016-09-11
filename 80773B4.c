int sub_80773B4()
{
  int v0; // r9@1
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r8@1
  __int16 v3; // r7@1
  char v4; // r6@1
  char v5; // r5@1
  char v6; // r4@1
  int *v7; // r1@1
  int v9; // [sp+1Ch] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = *(_BYTE *)(v202F7A4 + 3);
  v2 = *(_BYTE *)(v202F7A4 + 4);
  v3 = *(_BYTE *)(v202F7A4 + 5);
  v4 = sub_8077094(*(_BYTE *)(v202F7A4 + 2));
  v5 = sub_8077094(v1);
  v6 = sub_8077094(v2);
  v7 = &dword_3004B20[10 * (unsigned __int8)CreateTask(c3_08073CEC, 1)];
  *((_WORD *)v7 + 4) = v4;
  *((_WORD *)v7 + 5) = v5;
  *((_WORD *)v7 + 6) = v6;
  *((_WORD *)v7 + 7) = v3;
  *((_WORD *)v7 + 8) = v4;
  audio_play_and_stuff(v0, v4);
  ++v202F7B3;
  v202F7A4 += 6;
  return v9;
}
