int __fastcall s0A_jumpstd_if(int a1)
{
  int v1; // r3@1
  _BYTE *v2; // r0@1
  int v3; // r2@1
  int v4; // r4@1
  int *v5; // r1@2

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  if ( *(&gUnknown_083762DC[3 * v3] + *(_BYTE *)(v1 + 2)) == 1 )
  {
    v5 = (int *)(&gStdScripts + v4);
    if ( v5 < (int *)&gStdScripts_End )
      script_jump(v1, *v5);
  }
  return 0;
}
