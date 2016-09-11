int __fastcall sub_806775C(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  _BYTE *v3; // r0@1
  int v4; // r1@1

  v1 = a1;
  v2 = script_read_word(a1);
  v3 = *(_BYTE **)(v1 + 8);
  v4 = *v3;
  *(_DWORD *)(v1 + 8) = v3 + 1;
  if ( !v4 )
    sub_80B79B8(33708996, v2);
  return 0;
}
