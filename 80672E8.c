signed int __fastcall s77_showcontestwinner(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  if ( v2 )
    a1 = sub_8106630(v2);
  sub_80C4F10(a1);
  sub_80655F0();
  return 1;
}
