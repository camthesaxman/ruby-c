int __fastcall sub_8084F18(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  unsigned __int8 v4; // r0@1

  v2 = a1;
  v3 = 4 * sub_8084C94(a2) & 0x3FF;
  v4 = random_number_in_range(*(_DWORD *)(v2 + 4) + v3);
  sub_8084E78(*(_WORD *)(v3 + *(_DWORD *)(v2 + 4) + 2), v4);
  return *(_WORD *)(v3 + *(_DWORD *)(v2 + 4) + 2);
}
