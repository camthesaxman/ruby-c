int __fastcall sub_8126524(int a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  char v3; // r9@1
  char v4; // r8@1
  char v5; // r6@1
  int v6; // r5@1
  __int16 v7; // r0@1

  v1 = a1;
  v2 = *(char **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v5 = v2[1];
  *(_DWORD *)(v1 + 8) = v2 + 2;
  v6 = script_read_word(v1) - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100);
  v7 = script_read_word(v1);
  sub_80657A8(v6, v7 - *(_WORD *)(v1 + 104) + *(_WORD *)(v1 + 100) - v6, v3, v4, v5);
  return 0;
}
