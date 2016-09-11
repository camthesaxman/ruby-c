int __fastcall sub_81263E4(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r5@1
  unsigned __int8 *v4; // r1@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v4 = (unsigned __int8 *)(script_read_word(v1) - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100));
  if ( v3 == 255 || v3 == *(_DWORD *)(v1 + 108) )
    StringExpandPlaceholders(gStringVar4, v4);
  return 0;
}
