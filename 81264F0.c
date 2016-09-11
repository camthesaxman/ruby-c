int __fastcall sub_81264F0(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r2@1
  unsigned __int8 v3; // r0@1
  unsigned __int8 v4; // r1@1

  v1 = a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  sub_80C5C38(v3, v4);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0842F81E);
  *(_DWORD *)(v1 + 108) = 2;
  return 0;
}
