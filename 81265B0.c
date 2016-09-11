int __fastcall sub_81265B0(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r1@1
  int v3; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  sub_80EB890(v3);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0842F888);
  *(_DWORD *)(v1 + 108) = 2;
  return 0;
}
