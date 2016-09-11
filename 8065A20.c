int __fastcall sBB_virtual_if_jump(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r0@1
  int v3; // r4@1
  int v4; // r2@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v4 = script_read_word(v1) - v202E8B0;
  if ( *(&gUnknown_083762DC[3 * v3] + *(_BYTE *)(v1 + 2)) == 1 )
    script_jump(v1, v4);
  return 0;
}
