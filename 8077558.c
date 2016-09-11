int ma1D_08073FB4()
{
  int v0; // r5@1
  __int16 v1; // r8@1
  char v2; // r4@1
  int *v3; // r1@1
  int v5; // [sp+10h] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = *(_BYTE *)(v202F7A4 + 3);
  v2 = sub_8076F98(*(_BYTE *)(v202F7A4 + 2));
  v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_80775CC, 1)];
  *((_WORD *)v3 + 4) = v0;
  *((_WORD *)v3 + 5) = v2;
  *((_WORD *)v3 + 6) = v1;
  ++v202F7B3;
  v202F7A4 += 4;
  return v5;
}
