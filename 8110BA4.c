_BOOL4 __fastcall sub_8110BA4(int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r1@1
  unsigned int v4; // r4@1
  unsigned int v5; // r6@1

  v2 = a1;
  v3 = a2 << 16;
  v4 = v3 >> 16;
  v5 = v3 >> 16;
  return sub_8110BFC(*(_DWORD *)(a1 + 4), v3 >> 16, 12) << 24
      || sub_8110BFC(*(_DWORD *)(v2 + 8), v4, 5) << 24
      || sub_8110BFC(*(_DWORD *)(v2 + 16), v4, 12) << 24
      || sub_8110BFC(*(_DWORD *)(v2 + 12), v5, 5) << 24;
}
