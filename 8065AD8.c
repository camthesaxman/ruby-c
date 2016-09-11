int __fastcall s09_callstd(int a1)
{
  int v1; // r2@1
  _BYTE *v2; // r0@1
  int v3; // r1@1
  int *v4; // r1@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v4 = (int *)(&gStdScripts + v3);
  if ( v4 < (int *)&gStdScripts_End )
    script_call(v1, *v4);
  return 0;
}
