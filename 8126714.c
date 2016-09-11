int __fastcall sub_8126714(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1

  v1 = a1;
  v2 = script_read_word(a1);
  v3 = memcpy(33706812, (const char *)(v2 - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100)), 188);
  sub_813601C(v3);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0842F8E5);
  *(_DWORD *)(v1 + 108) = 2;
  return 0;
}
