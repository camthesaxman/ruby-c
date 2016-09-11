signed int __fastcall sub_81267C0(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1

  v1 = a1;
  v2 = script_read_word(a1);
  v3 = script_read_word(v1) - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100);
  v4 = script_read_word(v1);
  if ( v2 != (unsigned __int16)sub_8041174(v3, v4 - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100) - v3) )
  {
    *(_DWORD *)(v1 + 112) = 0;
    *(_DWORD *)(v1 + 108) = 1;
  }
  return 1;
}
