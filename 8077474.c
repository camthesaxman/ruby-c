int ma1C_8073ED0()
{
  int v0; // r5@1
  __int16 v1; // r8@1
  __int16 v2; // r9@1
  char v3; // r4@1
  int v4; // r0@1
  int *v5; // r1@1
  int v7; // [sp+14h] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = *(_BYTE *)(v202F7A4 + 3);
  v2 = *(_BYTE *)(v202F7A4 + 4);
  v3 = sub_8076F98(*(_BYTE *)(v202F7A4 + 2));
  v4 = (unsigned __int8)CreateTask(sub_80774FC, 1);
  v5 = &dword_3004B20[10 * v4];
  *((_WORD *)v5 + 4) = v0;
  *((_WORD *)v5 + 5) = v3;
  *((_WORD *)v5 + 6) = v1;
  *((_WORD *)v5 + 7) = v2;
  *((_WORD *)v5 + 12) = v1;
  call_via_r1(v4, *v5);
  ++v202F7B3;
  v202F7A4 += 5;
  return v7;
}
