signed int __fastcall s37_fadeout(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r1@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  if ( v3 )
    sub_8074FB8(4 * v3 & 0xFF);
  else
    sub_8074FB8(4);
  script_setup_asm_script(v1, (int)sub_8074FD0);
  return 1;
}
