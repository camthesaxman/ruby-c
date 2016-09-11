_BOOL4 __fastcall sub_80BD0EC(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  return (*(_BYTE *)(a1 + 1) & 0x10) == (*(_BYTE *)(a2 + 1) & 0x10)
      && sub_80BD070(a1, a2) << 24
      && sub_80BD0A0(v2, v3) << 24;
}
