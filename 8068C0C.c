int __fastcall map_warp_check_packed(int a1, _WORD *a2)
{
  _WORD *v2; // r3@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1

  v2 = a2;
  v3 = (*a2 - 7) & 0xFFFF;
  v4 = v2[1];
  v5 = *((_BYTE *)v2 + 4);
  return (char)map_warp_check();
}
