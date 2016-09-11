signed int __fastcall s6E_yes_no(int a1)
{
  _BYTE *v1; // r2@1
  int v2; // r3@1
  int v3; // r1@1
  signed int result; // r0@2

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  if ( (yes_no_box(v2, v3) & 0xFF) == 1 )
  {
    sub_80655F0();
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
