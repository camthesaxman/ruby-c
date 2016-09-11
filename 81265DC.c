int __fastcall sub_81265DC(int a1)
{
  char *v1; // r1@1
  char v2; // r5@1
  int v3; // r4@1
  unsigned __int16 v4; // r0@1

  v1 = *(char **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = (unsigned __int8)*v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v4 = script_read_halfword(a1);
  sub_81262E4(v2, v3, v4);
  return 0;
}
