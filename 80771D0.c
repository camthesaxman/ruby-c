int ma1B_8073C2C()
{
  int v0; // r9@1
  unsigned __int8 v1; // r4@1
  char v2; // r6@1
  __int16 v3; // r7@1
  char v4; // r5@1
  char v5; // r0@1
  __int16 v6; // r8@1
  char v7; // r4@1
  int *v8; // r1@1
  int v10; // [sp+1Ch] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = *(_BYTE *)(v202F7A4 + 3);
  v2 = *(_BYTE *)(v202F7A4 + 4);
  v3 = *(_BYTE *)(v202F7A4 + 5);
  v4 = sub_8076F98(*(_BYTE *)(v202F7A4 + 2));
  v5 = sub_8076F98(v1);
  v6 = v5;
  v7 = sub_807712C(v4, v5, v2);
  v8 = &dword_3004B20[10 * (unsigned __int8)CreateTask(c3_08073CEC, 1)];
  *((_WORD *)v8 + 4) = v4;
  *((_WORD *)v8 + 5) = v6;
  *((_WORD *)v8 + 6) = v7;
  *((_WORD *)v8 + 7) = v3;
  *((_WORD *)v8 + 8) = v4;
  audio_play_and_stuff(v0, v4);
  ++v202F7B3;
  v202F7A4 += 6;
  return v10;
}
