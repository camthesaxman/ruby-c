int __fastcall s38_fadein(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  if ( v2 )
    sub_8074FF8(4 * v2 & 0xFF);
  else
    sub_8074FF8(4);
  return 0;
}
